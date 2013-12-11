#include "AnimallDeviceBridge.hpp"

using namespace Animall::Device;

Bridge::Bridge() {
    std::string cmdExit = "exit";
    std::string tmp = "";
    this->qeo = qeo_factory_create();

    this->BnewWeight = new Animall::Qeo::Balance::NewWeight(this->qeo, true, false);
    this->BnewWeight->setCallBack(Bridge::callbackBalanceNewWeight);

    this->GnewWeight = new Animall::Qeo::Gamelle::NewWeight(this->qeo, true, false);
    this->GnewWeight->setCallBack(Bridge::callbackGamelleNewWeight);

    this->startListenBalanceNewWeight();
    this->startListenGamelleNewWeight();


    std::cout << "Service : Bridge : Active" << std::endl;
    do {
        std::cin >> tmp;
    } while (cmdExit.compare(tmp));

}

Bridge::~Bridge() {
    if (this->BnewWeight != NULL) {
        delete(this->BnewWeight);
    }
    if (this->GnewWeight != NULL) {
        delete(this->GnewWeight);
    }
    if (this->qeo != NULL) {
        qeo_factory_close(this->qeo);
    }
}

void Bridge::startListenGamelleNewWeight() {
    this->GnewWeight->startListen();
}

void Bridge::endListenGamelleNewWeight() {
    this->GnewWeight->closeListen();
}

void Bridge::callbackGamelleNewWeight(const qeo_event_reader_t *reader, const void *data, uintptr_t userdata) {
    qeo_animall_gamelle_NewWeight_t* msg = (qeo_animall_gamelle_NewWeight_t*) data;
    std::ostringstream* os;
    std::string exec = "";
    std::string cmd = "curl ";
    std::string url = "/api/v1/gamelle/push";
    std::string sweight;
    std::string stimestamp;
    std::string urlBase = "http://animall.qsomazzi.fr";
    int ret = 0;
    os = new std::ostringstream();
    (*os) << msg->weight;
    sweight = os->str();
    delete os;
    os = new std::ostringstream();
    (*os) << msg->timestamp;
    stimestamp = os->str();
    delete os;

    exec = cmd + urlBase + url + " --data '{\"id\":\"" + msg->uuid + "\",\"date\":" + stimestamp + ",\"state\":" + sweight + "}'";
    ret = system(exec.c_str());
    std::cout << std::endl;
}

void Bridge::startListenBalanceNewWeight() {
    this->BnewWeight->startListen();
}

void Bridge::endListenBalanceNewWeight() {
    this->BnewWeight->closeListen();
}

void Bridge::callbackBalanceNewWeight(const qeo_event_reader_t *reader, const void *data, uintptr_t userdata) {
    qeo_animall_balance_NewWeight_t* msg = (qeo_animall_balance_NewWeight_t*) data;
    std::ostringstream* os;
    std::string exec = "";
    std::string cmd = "curl ";
    std::string url = "/api/v1/balance/push";
    std::string sweight;
    std::string stimestamp;
    std::string urlBase = "http://animall.qsomazzi.fr";
    int ret = 0;
    os = new std::ostringstream();
    (*os) << msg->weight;
    sweight = os->str();
    delete os;
    os = new std::ostringstream();
    (*os) << msg->timestamp;
    stimestamp = os->str();
    delete os;

    exec = cmd + urlBase + url + " --data '{\"id\":\"" + msg->uuid + "\",\"date\":" + stimestamp + ",\"state\":" + sweight + "}'";
    ret = system(exec.c_str());
    std::cout << std::endl;
}