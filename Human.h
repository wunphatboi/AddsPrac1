#ifndef HUMAN_H
#define HUMAN_H
class Human: public Player{
    public:
    Human();
    Human(std::string n);
    std::string getName();
    char makeMove();
};
#endif