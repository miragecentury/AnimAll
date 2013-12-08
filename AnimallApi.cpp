#include "AnimallApi.hpp"

using namespace Animall;

void Api::balancePush(std::string uuid, float weight) {

}

void Api::gamellePush(std::string uuid, float weight) {

}

std::string Api::getCurrentTimeStampStr() {
    std::ostringstream* os;
    std::string timestampStr;
    os = new std::ostringstream();
    (*os) << (int) time(NULL);
    timestampStr = os->str();
    delete os;
    return timestampStr;
}