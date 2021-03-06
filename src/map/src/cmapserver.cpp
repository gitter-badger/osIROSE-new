#include "cmapserver.h"
#include "cmapclient.h"
#include "cmapisc.h"
#include "epackettype.h"

using namespace RoseCommon;

CMapServer::CMapServer(bool _isc, int16_t mapidx)
    : CRoseServer(_isc), map_idx_(mapidx) {
  if (true == _isc)
    log_.SetIdentity("CMapISCServer");
  else
    log_.SetIdentity("CMapServer");

  if (mapidx >= 0) {
    // We are a worker thread/process
    // We need to connect to the master thread/process to get data to handle
  } else {
    // We are a master/node process
    // We accept player connections and redirect their packet data to the
    // correct worker
  }
}

CMapServer::~CMapServer() {}

void CMapServer::OnAccepted(tcp::socket _sock) {
  //      CRoseServer::OnAccepted( std::move(_sock) );
  if (_sock.is_open()) {
    // Do Something?
    std::string _address = _sock.remote_endpoint().address().to_string();
    if (IsISCServer() == false) {
      std::lock_guard<std::mutex> lock(client_list_mutex_);
      CMapClient* nClient = new CMapClient(std::move(_sock));
      log_.icprintf("Client connected from: %s\n", _address.c_str());
      client_list_.push_front(nClient);
    } else {
      std::lock_guard<std::mutex> lock(isc_list_mutex_);
      CMapISC* nClient = new CMapISC(std::move(_sock));
      log_.icprintf("Server connected from: %s\n", _address.c_str());
      isc_list_.push_front(nClient);
    }
  }
}
