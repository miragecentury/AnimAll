/* 
 * File:   QeoEventWriter.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:54
 */

extern "C" {
#include <qeo/factory.h>
#include <qeo/api.h>
#include <qeo/error.h>
#include <unistd.h>
}

#ifndef QEOEVENTWRITER_HPP
#define	QEOEVENTWRITER_HPP

namespace Qeo {
    namespace Event {

        class Writer {
        public:
            Writer(qeo_factory_t* qeo, void* msgType);
            ~Writer();
            /**/
            bool send(void* msg);
        private:
            void init();
        protected:
            qeo_factory_t* qeo;
            qeo_event_writer_t* qeoEventWriter;
            void* msgType;
        };
    }
}

#endif	/* QEOEVENTWRITER_HPP */

