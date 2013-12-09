/* 
 * File:   AnimallQeoEventBalanceNewWeight.hpp
 * Author: zeus
 *
 * Created on 9 décembre 2013, 11:34
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

#ifndef ANIMALLQEOEVENTBALANCENEWWEIGHT_HPP
#define	ANIMALLQEOEVENTBALANCENEWWEIGHT_HPP

namespace Animall {
    namespace Qeo {
        namespace Balance {

            class NewWeight {
            public:
                NewWeight(qeo_factory_t* qeo, bool listener, bool sender);
                void publish(float newweight);
                void setCallBack(qeo_event_on_data_callback callback);
                void setSenderUUID(std::string uuid);
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

#endif	/* ANIMALLQEOEVENTBALANCENEWWEIGHT_HPP */

