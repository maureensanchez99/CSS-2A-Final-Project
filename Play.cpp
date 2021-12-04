#include <iostream>
#include <string>
#include "Play.h"
using namespace std;

Play::Play(){
    guess = " ";
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
    cin >> Game::letterGuess;
    checkGuess = checkLetter(Game::letterGuess);
    if(checkGuess == false){
        cout << "That letter is not in the phrase.";
    }
}

void Play::guessPhrase(){
    cout << "Guess the phrase: ";
    cin >> guess;
    bool isCorrect = Game::checkPhrase(guess);
}

bool Play::checkLetter(char letterGuess){
    string phrase = Game::getPhrase();
    for(int i = 0; i < Game::correctPhrase.size(); i++){
        char phraseLetter = correctPhrase[i];
        if(letterGuess == phraseLetter){
            cout << "That's correct!";
            return true;
        }
    }
    return false;
}
