#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player{
    protected:
    std::string name;
    char move;
    int count1 = 0;
    int count2 = 0;
    int variable = 11;
    char *moves = new char[count2];
    public:
    Player();
    virtual std::string getName() = 0;
    virtual char makeMove() = 0;
};
#endif