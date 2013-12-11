/* 
 * File:   QeoEventReader.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:54
 */

#include <cstdlib>
#include <iostream>
#include <exception>

extern "C" {
#include "qeo/factory.h"
#include "qeo/api.h"
#include "AnimallQeoEvent.h"
}

#ifndef QEOEVENTREADER_HPP
#define	QEOEVENTREADER_HPP

namespace Qeo {
    namespace Event {

        class Reader {
        public:
            Reader(qeo_factory_t* qeo, qeo_event_on_data_callback callback, const DDS_TypeSupport_meta* event);
            ~Reader();
            void start();
            void stop();
            static qeo_policy_perm_t onPolicy(const qeo_event_reader_t *reader, const qeo_policy_identity_t *identity, uintptr_t userdata);
            static void onNoMore(const qeo_event_reader_t *reader, uintptr_t userdata);
        private:
            void factory();
        protected:
            qeo_factory_t* qeo = NULL;
            qeo_event_reader_t* qeoEventReader = NULL;
            qeo_event_reader_listener_t* qeoEventReaderListener = NULL;
            const DDS_TypeSupport_meta* event = NULL;
            qeo_event_on_data_callback callback = NULL;
        };
    }
}

#endif	/* QEOEVENTREADER_HPP */

