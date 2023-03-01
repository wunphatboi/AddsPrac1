
#include <iostream>
#include "Player.h"
#include "Referee.h"
Referee::Referee(){
};

Player * Referee::refGame(Player * player1, Player * player2){
    if (player1->makeMove() == 'R' && player2->makeMove() == 'P') {
        cout << player2->getName() << " Wins" << endl;
        return player2;
    }
    else if (player1->makeMove() == 'P' && player2->makeMove() == 'S') {
        cout << player2->getName() << " Wins"<< endl;
        return player2;
    }
    else if (player1->makeMove() == 'S' && player2->makeMove() == 'R') {
        cout << player2->getName() << " Wins"<< endl;   
        return player2;
    }
    else if (player1->makeMove() == 'R' && player2->makeMove() == 'S') {
        cout << player1->getName() << " Wins" << endl;
        return player1;
    }
    else if (player1->makeMove() == 'P' && player2->makeMove() == 'R') {
        cout << player1->getName() << " Wins" << endl;
        return player1;
    }
    else if (player1->makeMove() == 'S' && player2->makeMove() == 'P') {
        cout << player1->getName() << " Wins" << endl;
        return player1;
    }
    else{
        cout << "It's a Tie" << endl;
        return NULL;
    }
};

std::string Referee::getName(){
    return name;
};

char Referee::makeMove(){
    return move;
};