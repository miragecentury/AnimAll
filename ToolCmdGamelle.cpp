#include "ToolCmdGamelle.hpp"

using namespace Tool::Cmd;

void Gamelle::service() {
    Animall::Device::Gamelle* gamelle;
    gamelle = new Animall::Device::Gamelle();
//    gamelle->publishNewWeight(545.5);
    gamelle->run();
    
    delete gamelle;
}
