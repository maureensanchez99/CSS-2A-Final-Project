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

bool Play::playGame(Player *player){
    Game object;
    Phrase correctAnswer;

    cout << endl << "It is Player " << player -> getName() << "'s turn" << endl;
    correctAnswer.displayPhrase(&object);
    guessLetter();

    return true;//ends turn for player
}

bool Play::guessLetter(){
    bool checkGuess = false, continueTurn = false;
    cout << "Guess a letter that you think is part of the phrase above: ";
    cin >> Game::letterGuess;
    checkGuess = checkLetter(Game::letterGuess);
    if(checkGuess == false){
        cout << "That letter is not in the phrase. Your turn is over\n" << endl;
    } else {
        cout << "Would you like to guess another letter (1) or try to guess the phrase (2)? ";
        cin >> playerOption;
        if(playerOption == 1){
            checkGuess = guessLetter();
        } else {
            checkGuess = guessPhrase();
        }
    }
    return continueTurn;
}

bool Play::guessPhrase(){
    cout << "Guess the phrase: ";
    cin >> guess;
    bool isCorrect = Game::checkPhrase(guess);
    return isCorrect;
}

bool Play::checkLetter(char letterGuess){
    /**string phrase = object.getPhrase();

    for(int i = 0; i < phrase.size(); i++){
        char phraseLetter = phrase[i];
        if(phraseLetter == letterGuess){
            cout << "That's correct!";
            return true;
        }
    }**/
    return false;
}
