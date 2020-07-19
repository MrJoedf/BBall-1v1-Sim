//
// Created by Joe D on 3/18/20.
//

#include "game.h"
#include <iostream>
using namespace std;
void game::playGame() {
    //Game conditions: first to 21
    while ((this->p1Points < 21 && this->p2Points < 21)) {
        this->p1Points += p1.playPoint(this->p1, this->p2);
        cout << p1.getName() << " - " << p1Points << ", " << p2.getName() << " - " << p2Points<<endl;

        this->p2Points += p2.playPoint(this->p2, this->p1);
        cout << p1.getName() << " - " << p1Points << ", " << p2.getName() << " - " << p2Points<<endl;

        //cout << p1.getName()<<" POINTS:" << p1Points << endl;
        //cout << p1.getName() <<"POINTS:" << p2Points << endl;

    }

        if (p2Points > p1Points) {
            cout << p2.getName() << " WINS " << p2Points << "-" << p1Points;
        } else if ((this->p2Points) < (this->p1Points)) {
            cout << this->p1.getName() << " WINS " << this->p1Points << "-" << p2Points<<endl;
        }


        cout << "YEP";
    }
