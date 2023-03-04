#include <iostream>
#include "Computer.h"
Computer::Computer(){
    name = "Computer";
};

std::string Computer::getName(){
    return name;
};

char Computer::makeMove(){
    move = 'R';
    return move;
};