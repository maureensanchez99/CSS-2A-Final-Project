//Parent class function definitions
#include "Game.h"
#include <string>
#include <iostream>
using namespace std;

Game::Game(){
    correctPhrase = "";
    letterGuess = ' ';
    guessPhrase = "";
    playerOption = 0;
    score = 0;
}

std::string Game::getPhrase(){ //gets the phrase the players are guessing from the Phrase class
    return correctPhrase;
}


void Game::turnOption(){

}

bool Game::checkPhrase(std::string guessPhrase){
    for(int i = 0; i < correctPhrase.size(); i++){
        char phraseLetter = correctPhrase[i];
        for(int i = 0; i < guessPhrase.size(); i++){

        }
    }
    return false;
}
