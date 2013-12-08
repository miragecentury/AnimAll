/* 
 * File:   AnimallDeviceGamelle.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:55
 */
#include <iostream>
#include "AnimallQeoEventGamelleNewWeight.hpp"

extern "C" {
#include "qeo/api.h"
#include "qeo/factory.h"
}

#ifndef ANIMALLDEVICEGAMELLE_HPP
#define	ANIMALLDEVICEGAMELLE_HPP

namespace Animall {
    namespace Device {

        class GamelleMat;

        class Gamelle {
        public:
            Gamelle();
            void run();
            ~Gamelle();
        private:
            qeo_factory_t* qeo = NULL;
            GamelleMat* mat = NULL;
        };

        class GamelleMat {
        public:
            GamelleMat(Gamelle* gamelle);
            ~GamelleMat();
        private:
            Gamelle* gamelle = NULL;
        };

    }
}

#endif	/* ANIMALLDEVICEGAMELLE_HPP */

