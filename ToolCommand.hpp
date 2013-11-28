/* 
 * File:   ToolCommand.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 11:53
 */

#include <string>
#include <iostream>

#ifndef TOOLCOMMAND_HPP
#define	TOOLCOMMAND_HPP

namespace Tool {

    class Command {
    public:
        static void launch(int argc, char** argv);
    private:
        static void help();
        static void dispath(int argc, char** argv, std::string firstArg);
        /**/
        static void cmdGamelle(int argc, char** argv);
        static void cmdGamelleHelp();
        static void cmdBalance(int argc, char** argv);
        static void cmdBalanceHelp();
        static void cmdBridge(int argc, char** argv);
        static void cmdBridgeHelp();
        static void cmdTv(int argc, char** argv);
        static void cmdTvHelp();
        /**/
    };
}

#endif	/* TOOLCOMMAND_HPP */

