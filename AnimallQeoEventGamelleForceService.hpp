/* 
 * File:   AnimallQeoEventGamelleForceService.hpp
 * Author: zeus
 *
 */

#include "AnimallQeoEvent.h"
#include "QeoEventReader.hpp"
#include "QeoEventWriter.hpp"

#include <string>
#include <iostream>
#include <fstream>

extern "C" {
#include "qeo/factory.h"
#include "qeo/api.h"
#include "AnimallQeoEvent.h"
#include <time.h>
}

using namespace Qeo::Event;

#ifndef ANIMALLQEOEVENTGAMELLEFORCESERVICE_HPP
#define	ANIMALLQEOEVENTGAMELLEFORCESERVICE_HPP

namespace Animall {
    namespace Qeo {
        namespace Gamelle {

            class ForceService {
            public:
                ForceService(qeo_factory_t* qeo, bool listener, bool sender);
                void setListenUUID(std::string uuid);
                void publish(std::string uuid, int dose);
                void setCallBack(qeo_event_on_data_callback callback);
                void startListen();
                void closeListen();
                ~ForceService();
                static std::string uuid;
            private:

                Reader* reader = NULL;
                Writer* writer = NULL;
                qeo_factory_t* qeo;
                std::string uuidListen;
            };

        }
    }
}

#endif	/* ANIMALLQEOEVENTGAMELLEFORCESERVICE_HPP */

