#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player{
    protected:
    std::string name;
    char move;
    public:
    Player();
    virtual std::string getName() = 0;
    virtual char makeMove() = 0;
};
#endif