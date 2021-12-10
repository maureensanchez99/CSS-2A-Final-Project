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

    category[0] = "Programming";
    category[1] = "Popular Anime";
    category[2] = "Salinas School";
    category[3] = "Computer Science Pioneers";
    category[4] = "Local Attractions";

    phrase[0] = "object oriented programming";
    phrase[1] = "demon slayer";
    phrase[2] = "hartnell community college";
    phrase[3] = "ada lovelace";
    phrase[4] = "monterey bay aquarium";
}

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

bool Game::checkPhrase(std::string guessPhrase){
    for(int i = 0; i < correctPhrase.size(); i++){
        char phraseLetter = correctPhrase[i];
        for(int i = 0; i < guessPhrase.size(); i++){

        }
    }
    return false;
}

std::string Game::getCategory(int num) const{
    return category(num);
}

std::string Game::getPhrase(int num) const{
    return phrase(num);
}


