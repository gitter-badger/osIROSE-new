/*
 * cnetwork_asio.h
 *
 *  Created on: Nov 23, 2015
 *      Author: ctorres
 */

#ifndef _CNETWORK_ASIO_H_
#define _CNETWORK_ASIO_H_

#ifdef _WIN32
#pragma warning(push)
#pragma warning(disable : 6011 6031 6102 6255 6258 6326 6387)
#define _WIN32_WINNT 0x0601
#endif

#include <asio.hpp>
#include <queue>
#include <mutex>

#ifdef _WIN32
#pragma warning(pop)
#endif

#include <thread>
#include <condition_variable>
#include "inetwork.h"
#include "logconsole.h"
#include "network_thread_pool.h"

#ifndef MAX_PACKET_SIZE
#define MAX_PACKET_SIZE 0x7FF
#endif

using asio::ip::tcp;
namespace Core {

/*!
 * \class CNetwork_Asio
 *
 * \brief An asio impl for networking sockets
 *
 * This class uses ASIO (http://think-async.com/) to implement the networking interface
 *
 * \sa INetwork
 *
 * \author Raven
 * \date nov 2015
 */
class CNetwork_Asio : public INetwork {
  typedef std::unique_ptr<asio::io_service::work> asio_worker;

 public:
  CNetwork_Asio();
  virtual ~CNetwork_Asio();

  virtual bool Init(std::string _ip, uint16_t _port) override;
  virtual bool Shutdown() override;

  virtual bool Connect() override;
  virtual bool Listen() override;
  virtual bool Reconnect() override;
  virtual bool Disconnect() override;

  virtual bool Send(std::unique_ptr<uint8_t> _buffer) override;
  virtual bool Recv(uint16_t _size = MAX_PACKET_SIZE) override;
  bool IsActive() { return active_; }
  void SetExtraMessageInfo(bool _enabled) {
    log_.SetDisplayOmittable(_enabled);
  }

 protected:
  void AcceptConnection();

  // Callback functions
  virtual bool OnConnect() override;
  virtual void OnConnected() override;
  virtual bool OnListen() override;
  virtual void OnListening() override;
  virtual bool OnDisconnect() override;
  virtual void OnDisconnected() override;
  virtual bool OnReceive() override;
  virtual bool OnReceived() override;
  virtual bool OnSend(uint8_t* _buffer) override;
  virtual void OnSent() override;
  virtual bool OnAccept();
  virtual void OnAccepted(tcp::socket _sock);
  virtual bool HandlePacket(uint8_t* _buffer);

  void SetSocket(tcp::socket _sock) { socket_ = std::move(_sock); }
  void ResetBuffer() {
    packet_offset_ = 0;
    packet_size_ = 6;
  }
  CLogConsole log_;

 protected:
  asio::io_service* io_service_;
  Core::NetworkThreadPool* networkService_;
  tcp::socket socket_;
  tcp::acceptor listener_;
  std::queue<std::unique_ptr<uint8_t>> send_queue_;
  std::queue<std::unique_ptr<uint8_t>> discard_queue_;
  std::mutex send_mutex_;
  std::mutex recv_mutex_;
  std::mutex discard_mutex_;
  std::condition_variable recv_condition_;

  std::thread process_thread_;
  uint8_t buffer_[MAX_PACKET_SIZE];
  uint16_t packet_offset_;
  uint16_t packet_size_;
  bool active_;
};
}

#endif
