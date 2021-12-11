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
    string phrase = object -> getPhrase();
    for(int i = 0; i < phrase.size(); i++){
        char phraseLetter = phrase[i];
        for(int i = 0; i < guessPhrase.size(); i++){
            char guessLetter = guessPhrase[i];
            if(phraseLetter != guessLetter){
                return false;
            }
        }
    }
    return true;
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


void Game::printsoFar(Game *object, string guessPhrase_){
    string soFar = object -> getPhrase();
    soFar = string(soFar.size(), '-');

    if(soFar != guessPhrase_){
           cout << "\nSo far, the word is: " << soFar << endl;
           }else{
           cout << "The hidden word was : " << guessPhrase_;
           }
    }
