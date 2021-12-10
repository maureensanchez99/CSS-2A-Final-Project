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
    chosenCategory = "";
    chosenPhrase = "";
}

std::string Game::getPhrase() const{ //gets the phrase the players are guessing from the Phrase class
    return chosenPhrase;
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

void Game::setCategory(std::string chosenCategory_){
    chosenCategory = chosenCategory_;
}

void Game::setPhrase(std::string chosenPhrase_){
    chosenPhrase = chosenPhrase_;
}

std::string Game::getCategory() const{
    return chosenCategory;
}
void hiddenOut(string phrase_){
 string hidden = phrase_;   
 string guess;
    
 replace_if ( hidden.begin(), hidden.end(), [] (char c) { return isalpha(c) }, '-' );
    
 cout << "Your hidden phrase: " << phrase << endl << endl;
}
