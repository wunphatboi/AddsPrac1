#ifndef REFEREE_H
#define REFEREE_H
class Referee: public Player{
    public:
    Referee();
    Player * refGame(Player * player1, Player * player2);
    std::string getName();
    char makeMove();
};
#endif
