/* 
 * File:   AnimallApi.hpp
 * Author: zeus
 *
 * Created on 6 décembre 2013, 16:05
 */

#include <string>
#include <iostream>
#include <ios>
#include <iosfwd>
#include <sstream>

extern "C" {
#include <time.h>
}

#ifndef ANIMALLAPI_HPP
#define	ANIMALLAPI_HPP

namespace Animall {

    class Api {
    public:
        void gamellePush(std::string uuid, float weight);
        void balancePush(std::string uuid, float weight);
    private:
        std::string getCurrentTimeStampStr();
        std::string convertFloatToString(float val);
        std::string convertIntToString(int val);
    };
}

#endif	/* ANIMALLAPI_HPP */

