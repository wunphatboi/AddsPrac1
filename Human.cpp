#include <iostream>
#include "Player.h"
#include "Human.h"
using namespace std;
Human::Human(){
    name = "Human";
};

Human::Human(std::string n){
    name = n;
    cout << "Enter move: ";
    cin >> move;
};

std::string Human::getName(){
    return name;
};

char Human::makeMove(){
    return move;
};