#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
class Human: public Player{
    public:
    Human();
    Human(std::string n);
    std::string getName();
    char makeMove();
};
#endif