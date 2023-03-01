#ifndef HUMAN_H
#define HUMAN_H
#include <string>
class Human: public Player{
    public:
    Human();
    Human(std::string n);
    std::string getName();
    char makeMove();
};
#endif