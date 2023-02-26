#include "Player.h"
Player::Player(){
    Name = NULL;
    Move = NULL;
};

Player::Player(string Name, Char Move){
    name = Name;
    move = Move;
};

char Player::makeMove(char x){
    move = x;
    return move;
};

string Player::getName(){
    return name;
};
