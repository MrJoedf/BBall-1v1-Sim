//
// Created by Joe D on 3/18/20.
//

#ifndef BASKETBALL_GAME_H
#define BASKETBALL_GAME_H
#include "player.h"

using namespace std;


class game {
    player p1;
    player p2;
    int p1Points;
    int p2Points;

public:
    game(player p1, player p2){
        this->p1 = p1;
        this->p2 = p2;
        this->p2Points=0;
        this->p1Points=0;
        playGame();
    }

    void playGame();
};


#endif //BASKETBALL_GAME_H
