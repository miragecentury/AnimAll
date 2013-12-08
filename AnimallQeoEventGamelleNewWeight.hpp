/* 
 * File:   AnimallQeoEventGamelleNewWeight.hpp
 * Author: zeus
 *
 * Created on 5 décembre 2013, 10:40
 */

#include "AnimallQeoEvent.h"
#include "QeoEventReader.hpp"

extern "C" {
#include "qeo/factory.h"
#include "qeo/api.h"
}

#ifndef ANIMALLQEOEVENTGAMELLENEWWEIGHT_HPP
#define	ANIMALLQEOEVENTGAMELLENEWWEIGHT_HPP

namespace Animall {
    namespace Qeo {
        namespace Gamelle {

            class NewWeight {
            public:
                NewWeight();
                void start();
                void stop();
                ~NewWeight();
            private:

            };

            void NewWeightThread(NewWeight* list);
        }
    }
}

#endif	/* ANIMALLQEOEVENTGAMELLENEWWEIGHT_HPP */

