//
// Created by Joe D on 3/18/20.
//
#include <string>

#ifndef PLAYER_H
#define PLAYER_H
using namespace std;

class player {
    string name;
    int twoPoint;
    int threePoint;
    int defense;
public:
    player(string pName, int twoP, int threeP, int d){
        name = pName;
        twoPoint = twoP;
        threePoint = threeP;
        defense = d;
    }

    player(){
        name = "";
        twoPoint = 0;
        threePoint = 0;
        defense = 0;
    }

    string getName();
    void setName(string name);
    void set2(int two);
    void set3(int three);
    void setD(int d);
    int get2();
    int get3();
    int getD();


    int playPoint(player p1, player p2);
};


#endif //BASKETBALL_PLAYER_H
