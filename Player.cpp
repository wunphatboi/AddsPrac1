#include "Player.h"
Player::Player(){
    name = "";
    move = '\0';
};

Player::Player(string Name, char Move){
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
