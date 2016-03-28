#include "cmapisc.h"
#include "crosepacket.h"
#include "config.h"

using namespace RoseCommon;

CMapISC::CMapISC() : CRoseISC(), char_server_(false) {
}

CMapISC::CMapISC(tcp::socket _sock)
    : CRoseISC(std::move(_sock)), char_server_(false) {
}

bool CMapISC::HandlePacket(uint8_t* _buffer) {
	(void)_buffer;
  /* CRosePacket* pak = (CRosePacket*)_buffer; */
  /* switch (pak->Header.Command) { */
    /* case ePacketType::ISC_ALIVE: */
    /*   return true; */
    /* case ePacketType::ISC_SERVER_AUTH: */
    /*   return true; */
    /* case ePacketType::ISC_SERVER_REGISTER: */
    /*   return true; */
    /* case ePacketType::ISC_TRANSFER: */
    /*   return true; */
    /* case ePacketType::ISC_SHUTDOWN: */
    /*   return true; */
    /* default: { */
    /*   CRoseISC::HandlePacket(_buffer); */
      /* return false; */
    /* } */
  /* } */
  return true;
}

void CMapISC::OnConnected() {
  /* CRosePacket* pak = new CRosePacket(ePacketType::ISC_SERVER_REGISTER); */

  /* Core::Config& config = Core::Config::getInstance(); */

  /* ServerReg pServerReg; */
  /* pServerReg.set_name(config.map_server().channelname()); */
  /* pServerReg.set_addr(config.serverdata().ip()); */
  /* pServerReg.set_port(config.map_server().clientport()); */
  /* pServerReg.set_type(ServerReg_ServerType_MAP_MASTER); */
  /* pServerReg.set_accright(config.map_server().accesslevel()); */

  /* int _size = pServerReg.ByteSize(); */
  /* uint8_t* data = new uint8_t[_size]; */
  /* memset(data, 0, _size); */
  /* if (pServerReg.SerializeToArray(data, _size) == false) */
    /* logger_->error("Couldn't serialize the data\n"); */
  /* pak->AddBytes(data, _size); */

  //	m_Log.icprintf( "IN 0x%X ", pak->Header.Command );
  //	for (int i = 0; i < _size; i++)
  //		m_Log.dcprintf( "%02X ", pak->Data[i] );
  //	m_Log.dcprintf( "\n" );
  //	m_Log.icprintf("Header[%i, 0x%X] Size: %i\n", pak->Header.Size,
  //pak->Header.Command, _size);

  /* logger_->trace("Sent a packet on CRoseISC: Header[{0}, 0x{1:x}]\n", */
  /*                pak->Header.Size, (uint16_t)pak->Header.Command); */

  /* Send((CRosePacket*)pak); */
  /* delete[] data; */
}
