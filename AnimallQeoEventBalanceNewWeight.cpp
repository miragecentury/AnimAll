#include "AnimallQeoEventBalanceNewWeight.hpp"

using namespace Animall::Qeo::Balance;
using namespace Qeo::Event;

NewWeight::NewWeight(qeo_factory_t* qeo, bool listener, bool sender) {
    this->qeo = qeo;
    this->reader = NULL;
    this->reader = NULL;
    if (listener == true) {
        this->reader = NULL; //set at setCallBack
    }
    if (sender == true) {
        this->writer = new Writer(this->qeo, qeo_animall_balance_NewWeight_type);
    }
}

void NewWeight::setSenderUUID(std::string uuid) {
    this->uuidSender = uuid;
}

void NewWeight::publish(float newweight) {
    qeo_animall_gamelle_NewWeight_t msg;
    msg.weight = newweight;
    msg.timestamp = (int32_t) time(NULL);
    msg.uuid = (char *) this->uuidSender.c_str();
    this->writer->send((const void *) &msg);
    std::cout << msg.uuid << " " << msg.weight << " " << msg.timestamp << std::endl;
}

void NewWeight::setCallBack(qeo_event_on_data_callback callback) {
    this->reader = new Reader(this->qeo, callback, qeo_animall_balance_NewWeight_type);
}

void NewWeight::startListen() {
    this->reader->start();
}

void NewWeight::closeListen() {
    this->reader->stop();
}

NewWeight::~NewWeight() {
    if (this->reader != NULL) {
        delete(this->reader);
    }
    if (this->writer != NULL) {
        delete(this->writer);
    }
}


