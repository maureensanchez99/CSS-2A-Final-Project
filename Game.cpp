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

/**void Game::hiddenOut(){
    string hidden = getPhrase();
    //string guess;

    replace_if ( hidden.begin(), hidden.end(), [] (char c) { return isalpha(c); }, '-' );

    cout << "Your hidden phrase: " << hidden << endl;
}**/


bool Game::hiddenOut(Game *object){
    string phrase = object -> getPhrase();
    int letterShows = 0;

    for (int i = 0; i < phrase.size(); i++){
        char phraseLetter = phrase[i];
        if(phraseLetter == letterGuess){
            //soFar[i] = guess;
        }
    }

    if(letterShows > 0 ){
        cout << "This letter is in the phrase: " /**guess**/ <<"." << endl;
        return true;
    }
}



    void Game::PrintsoFar (string phrase_){
        
    string soFar;
    soFar = string (phrase.size(), '-');
    
    if(soFar != phrase){
           cout << "\nSo far, the word is: " << soFar << endl;
           }else{
           cout << "The hidden word was : " << phrase;
           }
    }
