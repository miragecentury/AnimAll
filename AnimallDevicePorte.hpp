/* 
 * File:   AnimallDevicePorte.hpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 15:31
 */

#ifndef ANIMALLDEVICEPORTE_HPP
#define	ANIMALLDEVICEPORTE_HPP

namespace Animall {
    namespace Device {

        class Porte {
        public:
            Porte(bool daemon);
            ~Porte();

        private:
            void daemon();
            bool stateLock = true;
        protected:

        };
    }
}

#endif	/* ANIMALLDEVICEPORTE_HPP */

