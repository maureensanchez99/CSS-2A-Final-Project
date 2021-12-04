#include <iostream>
#include <string>
#include "Play.h"
using namespace std;

Play::Play(){
    guess = " ";
    correctPhrase = " ";
    playerOption = 0;
}

void Play::playGame(){
    //calls for display of phrase
    //player spins wheel
    /*if (players haven't guessed letters in phrase){
        guessLetter();
    } else {

    }*/

}

void Play::guessLetter(){
    bool checkGuess = false;
    cout << "Guess a letter that you think is part of the phrase: ";
    cin >> guess;
    checkGuess = checkLetter(guess);
    if(checkGuess == false){

    } else {

    }
}

void Play::guessPhrase(){
    cout << "Guess the phrase: ";
    cin >> guess;
}

bool Play::checkLetter(std::string guess){
    string phrase = Game::getPhrase();
    for(int i = 0; i < Game::correctPhrase.size(); i++){
        string phraseLetter = correctPhrase[i];
        if(guess == phraseLetter){
            cout << "That's correct!";
            return true;
        }
    }
    return false;
}

bool Play::checkPhrase(std::string guess){
    for(int i = 0; i < correctPhrase.size(); i++){
        string phraseLetter = correctPhrase[i];
        if(guess == phraseLetter){
            cout << "";
            return true;
        }
    }
    return false;
}
