/* 
 * File:   ToolCmdGamelle.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:53
 */
#include <iostream>

#include "AnimallDeviceGamelle.hpp"
#include "AnimallQeoEventGamelleForceService.hpp"

extern "C" {
#include "qeo/api.h"
#include "qeo/factory.h"
}

#ifndef TOOLCMDGAMELLE_HPP
#define	TOOLCMDGAMELLE_HPP

namespace Tool {
    namespace Cmd {

        class Gamelle {
        public:
            static void service(bool balance, bool distributeur);
            static void newweight(int argc, char** argv);
            static void forceservice(std::string uuid, int cycle);
        };
    }
}

#endif	/* TOOLCMDGAMELLE_HPP */

