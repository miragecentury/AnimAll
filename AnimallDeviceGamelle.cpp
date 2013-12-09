#include "AnimallDeviceGamelle.hpp"

using namespace Animall::Device;

std::mutex Gamelle::lock;

Gamelle::Gamelle() {
    std::cout << "Service : Gamelle : Init" << std::endl;
    this->qeo = qeo_factory_create();
    this->mat = new GamelleMat(this);
    this->uuid = this->initUUID();
    this->eventManagerNewWeight = new Animall::Qeo::Gamelle::NewWeight(this->qeo, false, true); //sender
    this->eventManagerNewWeight->setSenderUUID(this->uuid);
    this->eventManagerForceService = new Animall::Qeo::Gamelle::ForceService(this->qeo, true, false); //listener
    this->eventManagerForceService->setListenUUID(this->uuid);
    this->eventManagerForceService->setCallBack(Gamelle::callback);

    this->threadCheckWight = new std::thread(Gamelle::threadcheck, this);

    std::cout << "Serivce : Gamelle : UUID : " << this->uuid << std::endl;
}

void Gamelle::callback(const qeo_event_reader_t* reader, const void* data, uintptr_t userdata) {
    qeo_animall_gamelle_ForceService_t* msg = (qeo_animall_gamelle_ForceService_t*) data;
    int i = 1;
    std::cout << "Service : Gamelle : ForceService Received : uuid : " << msg->uuidGamelle << " : dose : " << msg->dose << std::endl;
    if (std::string("").compare(Animall::Qeo::Gamelle::ForceService::uuid)) {
        Gamelle::lock.lock();
        std::cout << "Accepted Run" << std::endl;
        system("mpg123 feeder.mp3");
        bFeeder_setup();
        iFeeder_startCycle();
        while (i < msg->dose) {
            sleep(10);
            iFeeder_startCycle();
            i++;
        }
        vFeeder_cancel();
        vFeeder_cleanup();
        std::cout << "End of Service" << std::endl;
        Gamelle::lock.unlock();
    }
}

void Gamelle::threadcheck(Gamelle* gamelle) {
    int weight = 0;
    int new_weight = 0;
    bScale_setup();
    //init
    while (gamelle->needClose != true) {
        bScale_getWeight(&new_weight);
        if (new_weight != weight) {
            gamelle->publishNewWeight((float) new_weight);
        }
        weight = new_weight;
        sleep(10);
    }
    //clear
    vScale_cleanup();
    std::cout << "end of thread" << std::endl;
}

Gamelle::~Gamelle() {
    std::cout << "Service : Gamelle : on Closing" << std::endl;
    if (this->mat != NULL) {
        delete this->mat;
    }
    if (this->qeo != NULL) {
        qeo_factory_close(this->qeo);
    }
    std::cout << "Service : Gamelle : Close" << std::endl;
}

void Gamelle::run() {
    std::string cmdExit = "exit";
    std::string tmp = "";
    std::cout << "Service : Gamelle : Active" << std::endl;
    do {
        std::cin >> tmp;
    } while (cmdExit.compare(tmp));
    this->needClose = true;
    this->threadCheckWight->join();
}

void Gamelle::publishNewWeight(float newweight) {
    this->eventManagerNewWeight->publish(newweight);
    std::cout << "Service : Gamelle : publish : " << newweight << std::endl;
}

/* TODO: */
std::string Gamelle::generateUUID() {

}

/* TODO: */
std::string Gamelle::getUUID() {
}

/* TODO */
std::string Gamelle::initUUID() {
    return std::string("7e5516bd-bc3b-4e16-bcb1-f83159a1993b");
}

GamelleMat::GamelleMat(Gamelle* gamelle) {

}

GamelleMat::~GamelleMat() {

}

