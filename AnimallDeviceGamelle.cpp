#include "AnimallDeviceGamelle.hpp"

using namespace Animall::Device;

Gamelle::Gamelle() {
    std::cout << "Service : Gamelle : Init" << std::endl;
    this->qeo = qeo_factory_create();
    this->mat = new GamelleMat(this);
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
    std::cout << "Service : Gamelle : Active" << std::endl;

}

GamelleMat::GamelleMat(Gamelle* gamelle) {

}

GamelleMat::~GamelleMat() {

}