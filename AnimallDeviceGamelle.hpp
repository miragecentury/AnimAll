/* 
 * File:   AnimallDeviceGamelle.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:55
 */
#include <iostream>
#include <thread>
#include <mutex>
#include "AnimallQeoEventGamelleNewWeight.hpp"
#include "AnimallQeoEventGamelleForceService.hpp"

extern "C" {
#include "qeo/api.h"
#include "qeo/factory.h"
#include "feeder.h"
#include "scale.h"
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
            void publishNewWeight(float newweight);
            void distribute(int cycle);
            static void callback(const qeo_event_reader_t *reader, const void *data, uintptr_t userdata);
            ~Gamelle();
            static std::mutex lock;
            void static threadcheck(Gamelle* gamelle);
            bool needClose = false;
        private:

            std::thread* threadCheckWight;
            qeo_factory_t* qeo = NULL;
            GamelleMat* mat = NULL;
            std::string uuid = "";
            std::string initUUID();
            std::string getUUID();
            std::string generateUUID();
            Animall::Qeo::Gamelle::NewWeight* eventManagerNewWeight = NULL;
            Animall::Qeo::Gamelle::ForceService* eventManagerForceService = NULL;
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

