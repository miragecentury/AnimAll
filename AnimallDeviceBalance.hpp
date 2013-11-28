/* 
 * File:   AnimallDeviceBalance.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:55
 */

#include "QeoEventWriter.hpp"

extern "C" {
#include "AnimallQeoEvent.h"
}

#ifndef ANIMALLDEVICEBALANCE_HPP
#define	ANIMALLDEVICEBALANCE_HPP

namespace Animall {
    namespace Device {

        class Balance {
        public:
            Balance();
            Balance(bool daemon);
        private:
            void daemon();
            void commandDispatch(int argc, char** argv);
            /**/
            void commandSetUUID(std::string uuid);
            void commandSendValeur(float weight);

            std::string uuid;
            Qeo::Event::Writer* qeoWriter;
        protected:
        };
    }
}

#endif	/* ANIMALLDEVICEBALANCE_HPP */

