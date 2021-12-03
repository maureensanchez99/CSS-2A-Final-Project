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

std::string Play::guessLetter(){
    cout << "Guess a letter that you think is part of the phrase: ";
    cin >> guess;
}

std::string Play::guessPhrase(){
    cout << "Guess the phrase: ";
    cin >> guess;
}

bool checkLetter(std::string guess){

}

bool checkPhrase(std::string guess){

}
