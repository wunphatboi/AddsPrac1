#include <iostream>
#include "Player.h"
#include "Referee.h"
Referee::Referee(){
};

Player * Referee::refGame(Player * player1, Player * player2){
    char temp1 = player1->makeMove();
    char temp2 = player2->makeMove();
    if (temp1 == 'R' && temp2 == 'P') {
        cout << player2->getName() << " Wins" << endl;
        return player2;
    }
    else if (temp1 == 'P' && temp2 == 'S') {
        cout << player2->getName() << " Wins"<< endl;
        return player2;
    }
    else if (temp1 == 'S' && temp2 == 'R') {
        cout << player2->getName() << " Wins"<< endl;   
        return player2;
    }
    else if (temp1 == 'R' && temp2 == 'S') {
        cout << player1->getName() << " Wins" << endl;
        return player1;
    }
    else if (temp1 == 'P' && temp2 == 'R') {
        cout << player1->getName() << " Wins" << endl;
        return player1;
    }
    else if (temp1 == 'S' && temp2 == 'P') {
        cout << player1->getName() << " Wins" << endl;
        return player1;
    }
    else{
        cout << "It's a Tie" << endl;
        return NULL;
    }
    return player1;
};

std::string Referee::getName(){
    return name;
};

char Referee::makeMove(){
    return move;
};