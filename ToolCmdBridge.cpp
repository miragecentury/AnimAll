#include "ToolCmdBridge.hpp"
#include "AnimallDeviceBridge.hpp"

using namespace Tool::Cmd;

void Bridge::service(){
    Animall::Device::Bridge* bridge = new Animall::Device::Bridge();
    delete(bridge);
}
