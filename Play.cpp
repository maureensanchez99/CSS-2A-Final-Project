#include <iostream>
#include <string>
#include "Play.h"
#include "Phrase.h"
using namespace std;

Play::Play(){
    guess = " ";
    playerOption = 0;
}

void Play::playGame(Player *player, Game *object){
    Phrase correctAnswer;
    bool continueTurn = false;

    cout << endl << "It is Player " << player -> getName() << "'s turn" << endl;
    correctAnswer.displayPhrase(object); //displays phrase with hidden letters
    continueTurn = guessLetter(object); //starts turn for player

    if(continueTurn == true){
        exit; //ends turn for player
    } else {
        playGame(player, object);
    }
}

bool Play::guessLetter(Game *object){
    bool checkGuess = false;

    cout << "Guess a letter that you think is part of the phrase above: ";
    cin >> Game::letterGuess;
    checkGuess = checkLetter(Game::letterGuess, object);
    if(checkGuess == false){
        cout << "That letter is not in the phrase. Your turn is over\n" << endl;
    } else {
        checkGuess = turnOption(object);
    }
    return checkGuess;
}

bool Play::guessPhrase(Game *object){
    cout << "Guess the phrase: ";
    cin >> guess;
    bool isCorrect = Game::checkPhrase(guess, object); //send player's guess and hidden phrase to be compared
    return isCorrect;
}

bool Play::checkLetter(char letterGuess, Game *object){
    string phrase = object -> getPhrase();
    int letterShows = 0;

    for(int i = 0; i < phrase.size(); i++){
        char phraseLetter = phrase[i];
        if(phraseLetter == letterGuess){
            letterShows++;
        }
    }

    if(letterShows > 0){
        cout << "That's correct! That letter shows up " << letterShows << " time(s).\n";
        return true;
    }

    return false;
}

bool Play::turnOption(Game *object){
    bool checkGuess = false;
    cout << "Would you like to guess another letter (1) or try to guess the phrase (2)? ";
    cin >> playerOption;
    if(playerOption == 1){
        checkGuess = guessLetter(object);
    } else {
        checkGuess = guessPhrase(object);
    }
    return checkGuess;
}
