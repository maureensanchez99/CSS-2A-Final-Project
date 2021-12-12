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
    return correctPhrase;
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
    cout << "\nThat is correct!" << endl;
    return true;
}

void Game::setCategory(std::string chosenCategory_){
    chosenCategory = chosenCategory_;
}

void Game::setPhrase(std::string chosenPhrase_){
    correctPhrase = chosenPhrase_;
    chosenPhrase = chosenPhrase_;
}

std::string Game::getCategory() const{
    return chosenCategory;
}

void Game::setLetterGuess(char letterGuess_){
    letterGuess = letterGuess_;
}

char Game::getLetterGuess(){
    return letterGuess;
}

void Game::setUpdatedPhrase(std::string chosenPhrase_){
    chosenPhrase = chosenPhrase_;
}

std::string Game::getUpdatedPhrase() const{
    return chosenPhrase;
}

void Game::printsoFar(Game *object, string guessPhrase_){
    string soFar = object -> getPhrase();
    soFar = string(soFar.size(), '-');

    if(soFar != guessPhrase_){
        cout << "\nSo far, the phrase is: ";
        for(int i = 0; i < soFar.length(); i++){
            if(soFar[i] == letterGuess){
                chosenPhrase[i] = letterGuess;
            }
        }
        cout << soFar << endl;
    } else{
        cout << "The hidden phrase is: " << guessPhrase_;
    }

    setUpdatedPhrase(chosenPhrase);
}
