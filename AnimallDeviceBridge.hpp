/* 
 * File:   AnimallDeviceBridge.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:55
 */

#include <iostream>
#include <iosfwd>
#include <sstream>

#include "AnimallQeoEventGamelleNewWeight.hpp"
#include "AnimallQeoEventBalanceNewWeight.hpp"

extern "C" {
#include "AnimallQeoEvent.h"
#include <qeo/factory.h>
#include <qeo/api.h>
}

#ifndef ANIMALLDEVICEBRIDGE_HPP
#define	ANIMALLDEVICEBRIDGE_HPP

namespace Animall {
    namespace Device {

        class Bridge {
        public:
            Bridge();
            ~Bridge();
            /**/
            void static callbackGamelleNewWeight(const qeo_event_reader_t *reader, const void *data, uintptr_t userdata);
            void static callbackBalanceNewWeight(const qeo_event_reader_t *reader, const void *data, uintptr_t userdata);
            /**/
        private:
            /**/
            void startListenGamelleNewWeight();
            void endListenGamelleNewWeight();

            /**/
            void startListenBalanceNewWeight();
            void endListenBalanceNewWeight();

            /******************************************************************/
            qeo_factory_t* qeo = NULL;
            /**/
            Animall::Qeo::Gamelle::NewWeight* GnewWeight;
            Animall::Qeo::Balance::NewWeight* BnewWeight;
            /**/
        };
    }
}

#endif	/* ANIMALLDEVICEBRIDGE_HPP */

