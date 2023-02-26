#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include "Player.h"
using namespace std;
class Computer: public Player{
    private:
    public:
    Computer();
    string getName();
};
#endif


INHERITANCE