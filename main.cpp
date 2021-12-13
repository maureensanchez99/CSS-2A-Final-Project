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
            players.push_back(userName);
        }
    } else {
        cout << "Game cannot be played if playing alone or with more than 4 players. Try again" << endl << endl;
        addPlayers(players); //calls function again to add players
    }
}

bool playerTurn(vector<Player> &players, Game &phrase){
    for(int i = 0; i < players.size(); i++){
        Player whoseTurn = players[i];//puts object from object into single variable to be referenced into another class
        Play object;

        if(i == 0){
            object.playGame(&whoseTurn, &phrase); //calls function in Play class
        } else if (i == 1){
            object.playGame(&whoseTurn, &phrase);
        } else if (i == 2){
            object.playGame(&whoseTurn, &phrase);
        } else if (i == 3){
            object.playGame(&whoseTurn, &phrase);
        } else {
            playerTurn(players, phrase);//recursive call to repeat this function
        }
    }
    return true;
}


bool playAnotherRound(){
    string continueGame = "";
    cout << "Do you want to play another game? (y or n) ";
    cin >> continueGame;
    if(continueGame == "y"){
        return false;
    } else {
        return true;
    }
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
    vector<Player> players;//holds all player info in vector as objects
    Play gameStart;
    Game phrase;
    bool gameOver = false, playAgain = false;

    cout << "Welcome to Wheel of Fortune!" << endl << endl;
    cout << "Play with others to figure out what are the hidden phrases \nwith only knowing how many words and letters there \nshould be along with a category hint relating to the phrase."
        << endl << endl << "Hint: the numbers that are with the category hint indicate how many words and \nhow many letters in those words that make up the phrase. "<< endl << endl;

    addPlayers(players);//game starts out by getting players' names

    do{//game keeps repeating until players choose to play game again
        while(gameOver == false){
            gameOver = playerTurn(players, phrase);
        }

        playAgain = playAnotherRound();
    } while(playAgain == false);

    return 0;
}
