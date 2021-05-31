//
// Created by xt on 5/31/21.
//
//---------------------------------------
//SNIFFER: add a new global file.
//---------------------------------------


#include "srsue/hdr/ue.h"
#include <boost/program_options.hpp>
#include <boost/program_options/parsers.hpp>
#include <iostream>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <unistd.h>

namespace srsran {
  bool StopUploadStatus = false;

  bool getStopUploadStatus()
  {
    return StopUploadStatus;
  }

  bool setStopUploadStatus()
  {
    if(StopUploadStatus){
      StopUploadStatus = false;
    }else{
      StopUploadStatus = true;
    }
  }

}