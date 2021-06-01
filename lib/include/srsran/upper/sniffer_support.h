//
// Created by xt on 5/31/21.
//
//---------------------------------------
//SNIFFER: add a new global file.
//---------------------------------------

#ifndef SRSRAN_SNIFFER_SUPPORT_H
#define SRSRAN_SNIFFER_SUPPORT_H



//namespace sniffer_support {
namespace srsran {

//class sniffer_support
//{
//public:
//  bool StopUploadStatus = false;
//
//  bool getStopUploadStatus();
//  bool setStopUploadStatus();
//
//};
//extern sniffer_support snifferSupport;

//bool test_snif(){
//  return false;
//}


bool StopUploadStatus = false;
bool getStopUploadStatus() final
{
  return StopUploadStatus;
}

void setStopUploadStatus() final
{
  if(StopUploadStatus){
    StopUploadStatus = false;
  }else{
    StopUploadStatus = true;
  }
}
}
#endif // SRSRAN_SNIFFER_SUPPORT_H