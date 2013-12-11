#include "QeoEventReader.hpp"

using namespace Qeo::Event;

Reader::Reader(qeo_factory_t* qeo, qeo_event_on_data_callback callback, const DDS_TypeSupport_meta* event) {
    this->qeo = qeo;
    this->callback = callback;
    this->event = event;
    this->qeoEventReader = NULL;
    this->qeoEventReaderListener = NULL;
    this->qeoEventReaderListener = (qeo_event_reader_listener_t*) malloc(sizeof (qeo_event_reader_listener_t));
    this->qeoEventReaderListener->on_data = this->callback;
    this->qeoEventReaderListener->on_no_more_data = Reader::onNoMore;
    this->qeoEventReaderListener->on_policy_update = Reader::onPolicy;
}

Reader::~Reader() {
    if (this->qeoEventReader != NULL) {
        qeo_event_reader_close(this->qeoEventReader);
    }
    if (this->qeoEventReaderListener != NULL) {
        free(this->qeoEventReaderListener);
    }
}

void Reader::factory() {
}

qeo_policy_perm_t Reader::onPolicy(const qeo_event_reader_t* reader, const qeo_policy_identity_t* identity, uintptr_t userdata) {

};

void Reader::onNoMore(const qeo_event_reader_t* reader, uintptr_t userdata) {

}

void Reader::start() {
    this->qeoEventReader = qeo_factory_create_event_reader(this->qeo, this->event, this->qeoEventReaderListener, 0);
}

void Reader::stop() {
    if (this->qeoEventReader != NULL) {
        qeo_event_reader_close(this->qeoEventReader);
    }
}