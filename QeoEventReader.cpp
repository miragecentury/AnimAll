#include "QeoEventReader.hpp"

using namespace Qeo::Event;

Reader::Reader(qeo_factory_t* qeo, void* callback, void* event) {
    this->qeo = qeo;
    this->callback = callback;
    this->event = event;
    this->qeoEventReader = NULL;
    this->qeoEventReaderListener = NULL;
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
    this->qeoEventReaderListener = (qeo_event_reader_listener_t*) malloc(sizeof (qeo_event_reader_listener_t));
    this->qeoEventReaderListener->on_data = (qeo_event_on_data_callback) this->callback;
}

void Reader::start() {
    this->qeoEventReader = qeo_factory_create_event_reader(this->qeo, (DDS_TypeSupport_meta *) this->event, (const qeo_event_reader_listener_t *) this->callback, 0);
}

void Reader::stop() {
    if (this->qeoEventReader != NULL) {
        qeo_event_reader_close(this->qeoEventReader);
    }
}