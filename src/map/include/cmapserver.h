#ifndef _CMAPSERVER_H_
#define _CMAPSERVER_H_

#include "croseserver.h"

class CMapServer : public RoseCommon::CRoseServer {
 public:
  CMapServer(bool _isc = false, int16_t mapidx = -1);
  virtual ~CMapServer();

  int32_t GetMapIDX() { return map_idx_; }

 protected:
  virtual void OnAccepted(tcp::socket _sock);

  enum class ServerType : int8_t { MASTER_NODE = -1, WORKER_THREAD };
  int32_t map_idx_;
};

#endif
