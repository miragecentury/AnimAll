/* 
 * File:   QeoEventReader.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:54
 */

#include <cstdlib>

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
            Reader(qeo_factory_t* qeo, void* callback, void*, void* event);
            ~Reader();
        private:
            void factory();
            void start();
            void stop();
        protected:
            qeo_factory_t* qeo = NULL;
            qeo_event_reader_t* qeoEventReader = NULL;
            qeo_event_reader_listener_t* qeoEventReaderListener = NULL;
            void* event = NULL;
            void* callback = NULL;
        };
    }
}

#endif	/* QEOEVENTREADER_HPP */

