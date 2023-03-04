#include <iostream>
#include "Player.h"
#include "Human.h"
Human::Human(){
    name = "Human";
};

Human::Human(string n){
    name = n;
    cout << "Enter move: ";
    while((move = getchar()) != 10) 
    {
    moves[count1++] = move;
    }
    count2++;
};

std::string Human::getName(){
    return name;
};

char Human::makeMove(){
    return move;
};