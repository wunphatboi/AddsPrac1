#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;
int main(){
    Computer c;
    Human h("Ollie");
    Referee r;
    r.refGame(&h,&c);
    return 0;
}