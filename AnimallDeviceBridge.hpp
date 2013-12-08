/* 
 * File:   AnimallDeviceBridge.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:55
 */

#include <iostream>

#include "AnimallQeoEventGamelleNewWeight.hpp"

extern "C" {
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
            void callbackGamelleNewWeight();
            void callbackBalanceNewWeight();
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

        protected:
        };
    }
}

#endif	/* ANIMALLDEVICEBRIDGE_HPP */

