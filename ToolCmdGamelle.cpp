#include "ToolCmdGamelle.hpp"

using namespace Tool::Cmd;

void Gamelle::service() {
    Animall::Device::Gamelle* gamelle;
    gamelle = new Animall::Device::Gamelle();
    gamelle->run();
    delete gamelle;
}
