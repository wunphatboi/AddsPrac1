#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
int main(void){
    Human h;
    Computer p;
    Referee ref;
    ref.refGame(&h,&p);
    return 0;
}