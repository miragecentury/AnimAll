#include "QeoEventReader.hpp"

using namespace Qeo::Event;

Reader::Reader(qeo_factory_t* qeo, qeo_event_on_data_callback callback, const DDS_TypeSupport_meta * event) {
    this->qeo = qeo;
    this->callback = callback;
    this->event = event;
    this->qeoEventReader = NULL;
    //this->qeoEventReaderListener = NULL;
    this->factory();
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
    //this->qeoEventReaderListener = (qeo_event_reader_listener_t*) malloc(sizeof (qeo_event_reader_listener_t));
    //this->qeoEventReaderListener->on_data = (qeo_event_on_data_callback) this->callback;
    this->qeoEventReaderListener.on_data = (qeo_event_on_data_callback) this->callback;
}

void Reader::start() {
    std::cout << "Reader::Start" << std::endl;
    try {
        this->qeoEventReader = qeo_factory_create_event_reader(this->qeo, this->event, &this->qeoEventReaderListener, 0);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void Reader::stop() {
    if (this->qeoEventReader != NULL) {
        qeo_event_reader_close(this->qeoEventReader);
    }
}