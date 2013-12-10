/* 
 * File:   ToolCmdLogger.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:53
 */

#include <iostream>

#include "AnimallQeoEventBalanceNewWeight.hpp"
#include "AnimallQeoEventGamelleForceService.hpp"
#include "AnimallQeoEventBalanceNewWeight.hpp"
#include "AnimallQeoEventGamelleNewWeight.hpp"

extern "C" {
#include <qeo/api.h>
#include <qeo/factory.h>
}

#ifndef TOOLCMDLOGGER_HPP
#define	TOOLCMDLOGGER_HPP

namespace Tool {
    namespace Cmd {

        class Logger {
        public:
            Logger();
            void start();
            void end();
            ~Logger();
            /**/
            static void printGamelleForceService(const qeo_event_reader_t *reader, const void *data, uintptr_t userdata);
            static void printGamelleNewWeight(const qeo_event_reader_t *reader, const void *data, uintptr_t userdata);
            static void printBalanceNewWeight(const qeo_event_reader_t *reader, const void *data, uintptr_t userdata);
        private:
            Animall::Qeo::Gamelle::ForceService* managerGamelleForceService;
            Animall::Qeo::Gamelle::NewWeight* managerGamelleNewWeight;
            Animall::Qeo::Balance::NewWeight* managerBalanceNewWeight;
            qeo_factory_t* qeo = NULL;
            bool stateListen = false;
        };
    }
}

#endif	/* TOOLCMDLOGGER_HPP */

