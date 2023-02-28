#ifndef PLAYER_H
#define PLAYER_H
using namespace std;
class Player{
    protected:
    string name;
    char move;
    public:
    Player();
    virtual string getName() = 0;
    virtual char makeMove() = 0;
};
#endif