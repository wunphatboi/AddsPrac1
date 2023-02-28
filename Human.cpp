#include <iostream>
#include "Player.h"
#include "Human.h"
Human::Human(){
    name = "Human";
};

Human::Human(string n){
    name = n;
    cout << "Enter move: ";
    cin >> move;
};

string Human::getName(){
    return name;
};

char Human::makeMove(){
    return move;
};