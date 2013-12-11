#include "AnimallQeoEventGamelleForceService.hpp"

using namespace Animall::Qeo::Gamelle;
using namespace Qeo::Event;

std::string ForceService::uuid = std::string("");

ForceService::ForceService(qeo_factory_t* qeo, bool listener, bool sender) {
    this->qeo = qeo;
    if (listener == true) {
        std::cout << "Listen Active" << std::endl;
        this->reader = NULL; //to setcallback
    }
    if (sender == true) {
        std::cout << "Writer Active" << std::endl;
        this->writer = new Writer(this->qeo, qeo_animall_gamelle_ForceService_type);
    }
}

ForceService::~ForceService() {
    if (this->reader != NULL) {
        delete(this->reader);
    }
    if (this->writer != NULL) {
        delete(this->writer);
    }
}

void ForceService::setListenUUID(std::string uuid) {
    ForceService::uuid = uuid;
}

/* TODO */
void ForceService::publish(std::string uuid, int dose) {
    qeo_animall_gamelle_ForceService_t msg;
    msg.dose = dose;
    msg.uuidGamelle = (char *) uuid.c_str();
    msg.timestamp = (int32_t) time(NULL);
    this->writer->send(&msg);
}

void ForceService::setCallBack(qeo_event_on_data_callback callback) {
    this->reader = new Reader(this->qeo, callback, qeo_animall_gamelle_ForceService_type);
}

void ForceService::startListen() {
    this->reader->start();
}

void ForceService::closeListen() {
    this->reader->stop();
}