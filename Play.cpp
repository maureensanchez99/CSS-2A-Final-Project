#include <iostream>
#include <string>
#include "Play.h"
//#include "Player.h"
#include "Phrase.h"
using namespace std;

Play::Play(){
    guess = " ";
    playerOption = 0;
}

bool Play::playGame(Player *player, Game *object){
    Phrase correctAnswer;

    cout << endl << "It is Player " << player -> getName() << "'s turn" << endl;
    correctAnswer.displayPhrase(object);
    guessLetter(object);

    return true;//ends turn for player
}

bool Play::guessLetter(Game *object){
    bool checkGuess = false, continueTurn = false;
    cout << "Guess a letter that you think is part of the phrase above: ";
    cin >> Game::letterGuess;
    checkGuess = checkLetter(Game::letterGuess, object);
    if(checkGuess == false){
        cout << "That letter is not in the phrase. Your turn is over\n" << endl;
    } else {
        checkGuess = turnOption(object);
    }
    return continueTurn;
}

bool Play::guessPhrase(Game *object){
    cout << "Guess the phrase: ";
    cin >> guess;
    bool isCorrect = Game::checkPhrase(guess, object);
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
    bool checkGuess = checkLetter(Game::letterGuess, object);
    cout << "Would you like to guess another letter (1) or try to guess the phrase (2)? ";
    cin >> playerOption;
    if(playerOption == 1){
        checkGuess = guessLetter(object);
    } else {
        checkGuess = guessPhrase(object);
    }
}
