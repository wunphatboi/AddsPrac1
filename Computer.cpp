#include <iostream>
#include "Computer.h"
using namespace std;
Computer::Computer(){
    name = "Computer";
    move = 'R';

};

std::string Computer::getName(){
    return name;
};

char Computer::makeMove(){
    return move;
};