/* CSS 2A Final Project */

#include <iostream>
#include "Game.h"
#include "Play.h"
#include "Phrase.h"
#include "Player.h"
#include "Wheel.h"

using namespace std;

void addPlayers(vector<Player> &players){
    string userName = "";
    for(int i = 0; i < 4; i++){
        cout << "What is the name of Player " << i+1 << ": ";
        cin >> userName;
        players[i].setName(userName);
    }
}

int main(){
    vector<Player> players(4);//holds all player info in vector as objects
    Play gameStart;

    addPlayers(players);//game starts out by getting players' names
    gameStart.playGame();

    return 0;
}
