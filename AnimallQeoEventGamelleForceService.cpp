#include "AnimallQeoEventGamelleForceService.hpp"

using namespace Animall::Qeo::Gamelle;

std::string ForceService::uuid = "";

ForceService::ForceService(qeo_factory_t* qeo, bool listener, bool sender) {
    this->qeo = qeo;
    if (listener == true) {
        this->reader = NULL; //to setcallback
    }
    if (sender == true) {

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