#include "AnimallDeviceGamelle.hpp"

using namespace Animall::Device;

std::mutex Gamelle::lock;

Gamelle::Gamelle(bool balance, bool distributeur) {
    std::cout << "Service : Gamelle : Init" << std::endl;
    this->qeo = qeo_factory_create();
    this->uuid = this->initUUID();
    if (balance) {
        std::cout << "Balance Active" << std::endl;
        this->balance = true;
        this->eventManagerNewWeight = new Animall::Qeo::Gamelle::NewWeight(this->qeo, false, true); //sender
        this->eventManagerNewWeight->setSenderUUID(this->uuid);
        bFeeder_setup();
        sleep(5);
        this->threadCheckWight = new std::thread(Gamelle::threadcheck, this);
    }
    if (distributeur) {
        std::cout << "Distributeur Active" << std::endl;
        this->distributeur = true;
        this->eventManagerForceService = new Animall::Qeo::Gamelle::ForceService(this->qeo, true, false); //listener
        this->eventManagerForceService->setListenUUID(this->uuid);
        this->eventManagerForceService->setCallBack((qeo_event_on_data_callback) Gamelle::callback);
        std::cout << "End Init Distributeur" << std::endl;
    }
    std::cout << "Serivce : Gamelle : UUID : " << this->uuid << std::endl;
}

void Gamelle::callback(const qeo_event_reader_t* reader, const void* data, uintptr_t userdata) {
    bool matInit = true;
    qeo_animall_gamelle_ForceService_t* msg = (qeo_animall_gamelle_ForceService_t*) data;
    int i = 0;
    std::cout << "Service : Gamelle : ForceService Received : uuid : " << msg->uuidGamelle << " : dose : " << msg->dose << std::endl;
    if (!std::string(msg->uuidGamelle).compare(Animall::Qeo::Gamelle::ForceService::uuid)) {
        Gamelle::lock.lock();
        std::cout << "Accepted Run" << std::endl;
        system("mpg123 ./feeder_voice.mp3");
        
        while (i < msg->dose) {
            iFeeder_startCycle();
            while (bFeeder_isRunning()) {
            };
            i++;
        }
        std::cout << "End of Service" << std::endl;
        Gamelle::lock.unlock();
    }
}

void Gamelle::threadcheck(Gamelle* gamelle) {
    int weight = 0;
    int new_weight = 0;
    bool matInit = true;
    try {
        bScale_setup();
    } catch (std::exception &e) {
        matInit = false;
    }
    sleep(5);
    //init
    while (gamelle->needClose != true) {
        if (matInit) {
            bScale_getWeight(&new_weight);
            std::cout << "W: " << new_weight << " old: " << weight << std::endl;
            //control -
            if (new_weight < 0) {
                new_weight = 0;
            }
            //tweak bis
            if (new_weight == 5 && weight > 5) {
                new_weight = 0;
            }
            //tweak variation
            if (new_weight > (weight + 15) || new_weight < (weight - 15)) {
                std::cout << "Publish " << new_weight << std::endl;
                gamelle->publishNewWeight((float) new_weight);
            } else {
                weight = new_weight;
            }
            weight = new_weight;
        }
        sleep(5);
    }
    //clear
    if (matInit) {
        vScale_cleanup();
    }

    std::cout << "end of thread" << std::endl;
}

Gamelle::~Gamelle() {
    vFeeder_cleanup();
    std::cout << "Service : Gamelle : on Closing" << std::endl;
    if (this->balance) {
        delete(this->eventManagerNewWeight);
    }
    if (this->distributeur) {
        delete(this->eventManagerForceService);
    }
    if (this->qeo != NULL) {
        qeo_factory_close(this->qeo);
    }
    std::cout << "Service : Gamelle : Close" << std::endl;
}

void Gamelle::run() {
    std::string cmdExit = "exit";
    std::string tmp = "";
    this->eventManagerForceService->startListen();
    std::cout << "Service : Gamelle : Active" << std::endl;
    do {
        std::cin >> tmp;
    } while (cmdExit.compare(tmp));
    this->needClose = true;
    if (this->balance) {
        this->threadCheckWight->join();
    }
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
    return std::string("7e5516bd-bc3b-4e16-bcb1-f83159a1993b");
}

/* TODO */
std::string Gamelle::initUUID() {
    return std::string("7e5516bd-bc3b-4e16-bcb1-f83159a1993b");
}

