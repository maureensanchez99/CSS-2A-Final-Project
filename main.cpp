/* CSS 2A Final Project */

#include <iostream>
#include "Game.h"
#include "Play.h"
#include "Phrase.h"
#include "Player.h"
#include "Wheel.h"

using namespace std;

void addPlayers(vector<Player> &players){
    int playerNumber = 0;
    string userName = "";
    cout << "How many players will be playing? ";
    cin >> playerNumber;

    if(playerNumber < 5 && playerNumber > 1){
        for(int i = 0; i < playerNumber; i++){
            cout << "What is the name of Player " << i+1 << ": ";
            cin >> userName;
            players[i].setName(userName);
        }
    } else if(playerNumber == 1) {
        cout << "What is the name of the Player: ";
        cin >> userName;
        players[0].setName(userName);
    } else {
        cout << "Game cannot play if more than 4 players. Try again" << endl << endl;
        addPlayers(players);
    }

}

int main(){
    vector<Player> players(4);//holds all player info in vector as objects
    Play gameStart;
    bool gameOver = false;

    cout << "Welcome to Wheel of Fortune!" << endl << endl;
    cout << "Play alone or with others to figure out what is the\nhidden phrase with only knowing how many words and\nletters there should be a category hint relating to the phrase."
        << endl << endl;
    addPlayers(players);//game starts out by getting players' names
    while(gameOver == false){
        for(int i = 0; i > 0 && gameOver != false; i++){
            gameStart.playGame();
        }
    }
    return 0;
}
