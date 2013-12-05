/* 
 * File:   ToolCmdLogger.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:53
 */

#include "AnimallQeoEventBalance.hpp"
#include "AnimallQeoEventGamelle.hpp"
#include "AnimallQeoEventTv.hpp"

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
        private:
            
        };
    }
}

#endif	/* TOOLCMDLOGGER_HPP */

