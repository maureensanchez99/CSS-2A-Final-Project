//Parent class function definitions
#include "Game.h"
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

Game::Game(){
    correctPhrase = "";
    chosenCategory = "";
    chosenPhrase = "";
    letterGuess = ' ';
    guessPhrase = "";
    playerOption = 0;
    score = 0;
}

std::string Game::getPhrase() const{ //gets the phrase the players are guessing from the Phrase class
    return chosenPhrase;
}

bool Game::checkPhrase(std::string guessPhrase, Game *object){
    for(int i = 0; i < correctPhrase.size(); i++){
        char phraseLetter = correctPhrase[i];
        for(int i = 0; i < guessPhrase.size(); i++){
            if(phraseLetter == guessPhrase[i]){
                cout << "true" << endl;
            }
        }
    }
    return false;
}

void Game::setCategory(std::string chosenCategory_){
    chosenCategory = chosenCategory_;
}

void Game::setPhrase(std::string chosenPhrase_){
    chosenPhrase = chosenPhrase_;
}

std::string Game::getCategory() const{
    return chosenCategory;
}

void Game::hiddenOut(){
    string hidden = getPhrase();
    //string guess;

    replace_if ( hidden.begin(), hidden.end(), [] (char c) { return isalpha(c); }, '-' );

    cout << "Your hidden phrase: " << hidden << endl;
}


