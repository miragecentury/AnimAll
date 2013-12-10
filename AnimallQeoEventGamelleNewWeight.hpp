/* 
 * File:   AnimallQeoEventGamelleNewWeight.hpp
 * Author: zeus
 *
 */

#include "QeoEventReader.hpp"
#include "QeoEventWriter.hpp"

#include <string>
#include <iostream>
#include <fstream>
#include <exception>

extern "C" {
#include "qeo/factory.h"
#include "qeo/api.h"
#include "AnimallQeoEvent.h"
#include <time.h>
}

using namespace Qeo::Event;

#ifndef ANIMALLQEOEVENTGAMELLENEWWEIGHT_HPP
#define	ANIMALLQEOEVENTGAMELLENEWWEIGHT_HPP

namespace Animall {
    namespace Qeo {
        namespace Gamelle {

            class NewWeight {
            public:
                NewWeight(qeo_factory_t* qeo, bool listener, bool sender);
                void publish(float newweight);
                void setSenderUUID(std::string uuid);
                void setCallBack(qeo_event_on_data_callback callback);
                void startListen();
                void closeListen();
                ~NewWeight();
            private:

                Reader* reader = NULL;
                Writer* writer = NULL;
                qeo_factory_t* qeo;
                std::string uuidSender = "";
            };

            void NewWeightThread(NewWeight* list);
        }
    }
}

#endif	/* ANIMALLQEOEVENTGAMELLENEWWEIGHT_HPP */

