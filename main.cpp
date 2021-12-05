/* CSS 2A Final Project */

#include <iostream>
#include "Game.h"
#include "Play.h"
#include "Phrase.h"
#include "Player.h"
#include "Wheel.h"

using namespace std;

void addPlayers(vector<Player> &players){//adds players to vector to hold each player as an object
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

bool playerTurn(){
    bool endGame = false;
    for(int i = 0; endGame = false; i++){

    }
    return true;
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
        gameOver = playerTurn();
        //add for loop into Play::playGame and send vector reference as a parameter
    }//add if loop in for loop so it can determine who's turn it is

    cout << "\nGame over! Congrats Player " << "on your win!"; //need to figure out how to determine which player is the winner; maybe make another variable in Player class?

    return 0;
}
