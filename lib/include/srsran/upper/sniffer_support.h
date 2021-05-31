//
// Created by xt on 5/31/21.
//
//---------------------------------------
//SNIFFER: add a new global file.
//---------------------------------------

#ifndef SRSRAN_SNIFFER_SUPPORT_H
#define SRSRAN_SNIFFER_SUPPORT_H

#endif // SRSRAN_SNIFFER_SUPPORT_H


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
  class sniffer_support
  {
    bool getStopUploadStatus();
    bool setStopUploadStatus();
  }
}