#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player{
    private:
    string name;
    char move;
    public:
    Player();
    Player(string Name, char Move);
    char makeMove(char x);
    string getName();
};
#endif