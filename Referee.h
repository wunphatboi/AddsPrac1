#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"
class Referee: public Player{
    public:
    Referee();
    Player * refGame(Player * player1, Player * player2);
    std::string getName();
    char makeMove();
};
#endif