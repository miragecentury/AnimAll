#include "ToolCmdGamelle.hpp"

using namespace Tool::Cmd;

void Gamelle::service(bool balance, bool distributeur) {
    Animall::Device::Gamelle* gamelle;
    gamelle = new Animall::Device::Gamelle(balance,distributeur);
    //    gamelle->publishNewWeight(545.5);
    gamelle->run();

    delete gamelle;
}

void Gamelle::forceservice(std::string uuid, int cycle) {
    qeo_factory_t* qeo = qeo_factory_create();
    Animall::Qeo::Gamelle::ForceService* fs = new Animall::Qeo::Gamelle::ForceService(qeo, false, true);
    fs->publish(uuid, cycle);
    qeo_factory_close(qeo);
}