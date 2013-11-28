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

    if (exec == false && cmdBalance.compare(firstArg)) {
        exec = true;
    }
    if (exec == false && cmdBridge.compare(firstArg)) {
        exec = true;
    }

    if (exec == false && cmdGamelle.compare(firstArg)) {
        exec = true;
    }

    if (exec == false && cmdTv.compare(firstArg)) {
        exec = true;
    }
    if (exec == false && cmdPhone.compare(firstArg)) {
        exec = true;
    }

    if (exec == false && cmdPorte.compare(firstArg)) {
        exec = true;
    }



    if (exec == false) {
        Command::help();
    }
}

void Command::help() {
    std::cout << "Help:" << std::endl;
    std::cout << "\t- " << "balance" << "\t : " << "pilotage de la balance";
    std::cout << "\t- " << "gamelle" << "\t : " << "pilotage de la gamelle";
    std::cout << "\t- " << "bridge" << "\t : " << "pilotage du bridge";
    std::cout << "\t- " << "tv" << "\t : " << "pilotage de la tv";
    std::cout << "\t- " << "phone" << "\t : " << "pilotage du téléphone";
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