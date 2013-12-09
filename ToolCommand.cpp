#include "ToolCommand.hpp"

using namespace Tool;

void Command::launch(int argc, char** argv) {
    if (argc >= 2) {
        Command::dispath(argc, argv, std::string(argv[1]));
    } else {
        Command::help();
    }
}

/**/

void Command::dispath(int argc, char** argv, std::string firstArg) {
    bool exec = false;
    std::string cmdBalance = "balance";
    std::string cmdBridge = "bridge";
    std::string cmdGamelle = "gamelle";
    std::string cmdTv = "tv";
    std::string cmdPhone = "phone";
    std::string cmdPorte = "porte";
    std::string cmdLogger = "logger";

    if (exec == false && !cmdLogger.compare(firstArg)) {
        exec = true;
        Command::cmdLogger(argc, argv);
    }

    if (exec == false && !cmdBalance.compare(firstArg)) {
        exec = true;
        Command::cmdBalance(argc, argv);
    }

    if (exec == false && !cmdBridge.compare(firstArg)) {
        exec = true;
        Command::cmdBridge(argc, argv);
    }

    if (exec == false && !cmdGamelle.compare(firstArg)) {
        exec = true;
        Command::cmdGamelle(argc, argv);
    }

    if (exec == false && !cmdTv.compare(firstArg)) {
        exec = true;
        Command::cmdTv(argc, argv);
    }

    if (exec == false && !cmdPhone.compare(firstArg)) {
        exec = true;

    }

    if (exec == false && !cmdPorte.compare(firstArg)) {
        exec = true;
    }

    if (exec == false) {
        Command::help();
    }
}

void Command::help() {
    std::cout << "Help:" << std::endl;
    std::cout << "\t- " << "balance" << "\t : " << "pilotage de la balance" << std::endl;
    std::cout << "\t- " << "gamelle" << "\t : " << "pilotage de la gamelle" << std::endl;
    std::cout << "\t- " << "bridge" << "\t : " << "pilotage du bridge" << std::endl;
    std::cout << "\t- " << "tv" << "\t\t : " << "pilotage de la tv" << std::endl;
    std::cout << "\t- " << "phone" << "\t\t : " << "pilotage du téléphone" << std::endl;
    std::cout << "\t- " << "portique" << "\t : " << "pilotage du portique" << std::endl;
}

/**/

void Command::cmdBalance(int argc, char** argv) {
    bool exec = false;
    std::string cmdHelp = "help";
    std::string cmdSetUUID = "setuuid";

    if (argc >= 3) {
        if (exec == false && !cmdHelp.compare(std::string(argv[2]))) {
            exec = true;
        }
        if (exec == false && !cmdSetUUID.compare(std::string(argv[2]))) {
            exec = true;
        }

        if (exec == false) {
            Command::cmdBalanceHelp();
        }
    } else {
        Command::cmdBalanceHelp();
    }

}

void Command::cmdBalanceHelp() {
    std::cout << "Help: balance" << std::endl;
    std::cout << "\t- " << "balance" << "\t : " << "pilotage de la balance";
}

void Command::cmdBridge(int argc, char** argv) {

}

void Command::cmdBridgeHelp() {
    std::cout << "Help: bridge" << std::endl;
    std::cout << "\t- " << "balance" << "\t : " << "pilotage de la balance";
}

void Command::cmdGamelle(int argc, char** argv) {
    Tool::Cmd::Gamelle::service();
}

void Command::cmdGamelleHelp() {
    std::cout << "Help: gamelle" << std::endl;
    std::cout << "\t- " << "balance" << "\t : " << "pilotage de la balance";
}

void Command::cmdTv(int argc, char** argv) {

}

void Command::cmdTvHelp() {
    std::cout << "Help: tv" << std::endl;
    std::cout << "\t- " << "balance" << "\t : " << "pilotage de la balance";
}

void Command::cmdLogger(int argc, char** argv) {
    std::string cmdExit = "exit";
    std::string tmp = "";
    Tool::Cmd::Logger * logger = new Tool::Cmd::Logger();
    logger->start();
    do {
        std::cin >> tmp;
    } while (cmdExit.compare(tmp));
    logger->end();
    delete(logger);
}