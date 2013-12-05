/* 
 * File:   main.cpp
 * Author: zeus
 *
 * Created on 25 novembre 2013, 09:33
 */

#include <cstdlib>
#include "ToolCommand.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Tool::Command::launch(argc, argv);
    return 0;
}

