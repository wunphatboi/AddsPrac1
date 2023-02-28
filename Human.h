#ifndef HUMAN_H
#define HUMAN_H
class Human: public Player{
    public:
    Human();
    Human(string n);
    string getName();
    char makeMove();
};
#endif