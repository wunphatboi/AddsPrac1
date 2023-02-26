#include <iostream>
#include "Computer.h"
using namespace std;

Computer::Computer(){
    name = "Computer";
    move = 'r';
};

string Computer::getName(){
    return name;
};