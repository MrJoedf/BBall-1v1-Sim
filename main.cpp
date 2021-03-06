#include <iostream>
#include <fstream>
#include <iomanip>
#include "player.h"
#include "game.h"
using namespace std;

void printPlayers(player Roster[], int size){
    cout<<"\nPLAYERS:\n";
    for(int i=0; i<size; i++){
        cout<<"#"<<i+1<<" "<<Roster[i].getName()<<endl;
    }
}

int main() {
    string line;
    int numPlayers = 0;

    string playerName, player2P, player3P, string playerD;

    ifstream playerFile, playerCount;
    
    playerCount.open("Players.txt");
    while (getline(playerCount, line)) {
        numPlayers++;
    }
    playerCount.close();

    player Players[numPlayers], tempPlayer;
    playerFile.open("Players.txt");

    //Getting players from file and adding to array
    for (int i = 0; i < numPlayers; i++) {
        getline(playerFile, playerName, ',');
        tempPlayer.setName(playerName);

        getline(playerFile, player2P, ',');
        tempPlayer.set2(stoi(player2P));

        getline(playerFile, player3P, ',');
        tempPlayer.set3(stoi(player3P));

        getline(playerFile, playerD);
        tempPlayer.setD(stoi(playerD));

        Players[i] = tempPlayer;
    }
    cout << "Welcome to 1v1 BasketBall Sim!" << endl;
    cout<<"Choose 2 players: "<<endl;

    int n1, n2;

    printPlayers(Players,numPlayers);

    cin>>n1;
    cin>>n2;

    game Game(Players[n1-1], Players[n2-1]);
   
    return 0;
}
