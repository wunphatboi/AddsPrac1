#include <iostream>
#include "Player.h"
#include "Human.h"
Human::Human(){
    this->name = "Human";
};

Human::Human(string n){
    this->name = n;
};

std::string Human::getName(){
    return this->name;
};

char Human::makeMove(){
    cout << "Enter move: ";
    cin >> move;
    return move;
};