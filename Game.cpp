//Parent class function definitions
#include "Game.h"
#include <string>
#include <iostream>
using namespace std;

std::string Game::getPhrase(){ //gets the phrase the players are guessing from the Phrase class
    return correctPhrase;
}

void Game::displayPhrase(){
    for(int i = 0; i < correctPhrase.size(); i++){
        cout << correctPhrase[i] << " ";
    }
}

void Game::turnOption(){

}

void Game::updateScore(){

}

bool Game::checkPhrase(std::string guessPhrase){
    for(int i = 0; i < correctPhrase.size(); i++){
        char phraseLetter = correctPhrase[i];
        for(int i = 0; i < guessPhrase.size(); i++){

        }
    }
    return false;
}
