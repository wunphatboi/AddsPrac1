#include <iostream>
#include "Computer.h"
Computer::Computer(){
    name = "Computer";
    move = 'R';

};

string Computer::getName(){
    return name;
};

char Computer::makeMove(){
    return move;
};