#include "QeoEventWriter.hpp"

using namespace Qeo::Event;

Writer::Writer(qeo_factory_t* qeo, const DDS_TypeSupport_meta * msgType) {
    this->qeo = qeo;
    this->msgType = msgType;
    this->init();
}

Writer::~Writer() {
    if (this->qeoEventWriter != NULL) {
        qeo_event_writer_close(this->qeoEventWriter);
    }
}

void Writer::init() {
    this->qeoEventWriter = qeo_factory_create_event_writer(this->qeo, (const DDS_TypeSupport_meta *) this->msgType, NULL, 0);
    sleep(2);
}

bool Writer::send(const void * msg) {
    if (qeo_event_writer_write(this->qeoEventWriter, msg) == QEO_OK) {
        return true;
    } else {
        return false;
    }
}