/* 
 * File:   QeoEventReader.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:54
 */

#include <cstdlib>
#include <iostream>

extern "C" {
#include <qeo/factory.h>
#include <qeo/api.h>
}

#ifndef QEOEVENTREADER_HPP
#define	QEOEVENTREADER_HPP

namespace Qeo {
    namespace Event {

        class Reader {
        public:
            Reader(qeo_factory_t* qeo, qeo_event_on_data_callback callback, const DDS_TypeSupport_meta * event);
            ~Reader();
             void start();
            void stop();
        private:
            void factory();
        protected:
            qeo_factory_t* qeo = NULL;
            qeo_event_reader_t* qeoEventReader = NULL;
            qeo_event_reader_listener_t qeoEventReaderListener;
            const DDS_TypeSupport_meta * event = NULL;
            qeo_event_on_data_callback callback = NULL;
        };
    }
}

#endif	/* QEOEVENTREADER_HPP */

