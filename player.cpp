//
// Created by Joe D on 3/18/20.
//

#include "player.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

void player::setName(string name){
    this->name=name;
}
void player::set2(int two){
    this->twoPoint=two;
};
void player::set3(int three){
    this->threePoint=three;
};

void player::setD(int d){
    this->defense=d;
};
string player::getName(){
    return this->name;
};
int player::get2(){
    return this->twoPoint;
};
int player::get3(){
    return this->threePoint;
};
int player::getD(){
    return this->defense;
};

int player::playPoint(player p1, player p2){
    //Imported random mod
    srand(time(NULL) + rand()); //new random num each iteration

    float output = (rand()%100)*1.0;

    //Statistical probability of making a shot
    float prob2 = ((p1.twoPoint)*1.0/(p1.twoPoint+p2.defense)*1.0)*100.0;
    float prob3 = ((p1.threePoint)*1.0/(p1.threePoint+p2.defense)*1.0)*100.0;

    /*cout<<"\n PROB2:"<<prob2<<endl;
    cout<<"\n PROB3:"<<prob3<<endl;
    cout<<"OUTPUT:"<<output;*/

    if(output<=prob2){
        if(output<prob3){
            cout<<p1.getName()<<" makes a 3"<<endl;
            return 3;
        }else{
            cout<<p1.getName()<<" scores a 2"<<endl;
            return 2;
        }
    } else{
        cout<<p1.getName()<<" misses the shot"<<endl;
        return 0;
        }
    }

;


