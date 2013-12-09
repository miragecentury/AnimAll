#include "ToolCmdLogger.hpp"

using namespace Tool::Cmd;

Logger::Logger() {
    this->qeo = qeo_factory_create();
    this->managerBalanceNewWeight = new Animall::Qeo::Balance::NewWeight(this->qeo, true, false);
    this->managerBalanceNewWeight->setCallBack(Logger::printBalanceNewWeight);
    this->managerGamelleForceService = new Animall::Qeo::Gamelle::ForceService(this->qeo, true, false);
    this->managerGamelleForceService->setListenUUID("");
    this->managerGamelleForceService->setCallBack(Logger::printGamelleForceService);
    this->managerGamelleNewWeight = new Animall::Qeo::Gamelle::NewWeight(this->qeo, true, false);
    this->managerGamelleNewWeight->setCallBack( Logger::printGamelleNewWeight);
}

Logger::~Logger() {
    if (this->stateListen == true) {
        this->end();
    }
    if (this->managerBalanceNewWeight != NULL) {
        delete(this->managerBalanceNewWeight);
    }

    if (this->managerGamelleForceService != NULL) {
        delete(this->managerGamelleForceService);
    }

    if (this->managerGamelleNewWeight != NULL) {
        delete(this->managerGamelleNewWeight);
    }

    if (this->qeo != NULL) {
        qeo_factory_close(this->qeo);
    }
}

void Logger::start() {

    this->stateListen = true;
    this->managerBalanceNewWeight->startListen();
    this->managerGamelleForceService->startListen();
    this->managerGamelleNewWeight->startListen();
}

void Logger::end() {
    this->stateListen = false;
    this->managerBalanceNewWeight->closeListen();
    this->managerGamelleForceService->closeListen();
    this->managerGamelleNewWeight->closeListen();
}

void Logger::printBalanceNewWeight(const qeo_event_reader_t* reader, const void* data, uintptr_t userdata) {

}

void Logger::printGamelleForceService(const qeo_event_reader_t* reader, const void* data, uintptr_t userdata) {

}

void Logger::printGamelleNewWeight(const qeo_event_reader_t* reader, const void* data, uintptr_t userdata) {
    qeo_animall_balance_NewWeight_t* msg = (qeo_animall_balance_NewWeight_t*) data;
    std::cout << "*****" << std::endl;
    std::cout << "*\t" << "BalanceWeightUpdate:" << std::endl;
    std::cout << "*\t\t" << "uuid:" << "\t\t" << msg->uuid << std::endl;
    std::cout << "*\t\t" << "weight:" << "\t\t" << msg->weight << std::endl;
    std::cout << "*\t\t" << "timestamp:" << "\t" << msg->timestamp << std::endl;
    std::cout << "*****" << std::endl;
}