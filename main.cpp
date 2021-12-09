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

bool playerTurn(vector<Player> &players){
    bool endGame = false;
    for(int i = 0; endGame = false; i++){
        Player whoseTurn = players[i]; //puts object from object into single variable to be referenced into another class
        Play object;
        if(i == 1){
            endGame = object.playGame(whoseTurn);
        } else if (i == 2){
            endGame = object.playGame(whoseTurn);
        } else if (i == 3){
            endGame = object.playGame(whoseTurn);
        } else {
            playerTurn(players);//recursive call to repeat this function
        }
    }
    return true;
}

void winner(vector<Player> &players){
    for(int i = 0; i < players.size(); i++){
        bool winner = players[i].getGameWinner();
        if(winner == true){
            cout << "\nGame over! Congrats Player " << players[i].getName() << "on your win!";
            //need to figure out how to determine which player is the winner; maybe make another variable in Player class?
        }
    }
}

int main(){
    vector<Player> players(4);//holds all player info in vector as objects
    Play gameStart;
    bool gameOver = false, playAgain = false;

    cout << "Welcome to Wheel of Fortune!" << endl << endl;
    cout << "Play alone or with others to figure out what is the\nhidden phrase with only knowing how many words and\nletters there should be along with a category hint relating to the phrase."
        << endl << endl;
    do{//game keeps repeating until players choose to play game again
        addPlayers(players);//game starts out by getting players' names
        while(gameOver == false){
            gameOver = playerTurn(players);
        }
    } while(playAgain == false);

    return 0;
}
