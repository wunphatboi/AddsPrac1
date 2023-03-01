#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
int main(){
    Computer computer;
    Human human("Ollie");
    Referee ref;
    ref.refGame(&human,&computer);
    return 0;
}