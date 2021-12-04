#ifndef PLAY_H_INCLUDED
#define PLAY_H_INCLUDED

#include <iostream>
#include <string>
#include "Game.h"

class Play: public Game {
private:
    std::string guess;
    int playerOption;

public:
    Play();//constructor
    void playGame();//begins round for player
    void guessLetter();//player guesses a letter
    void guessPhrase();//player guesses the phrase
    bool checkLetter(char guessLetter);//checks if player's guess is correct or not
    bool checkPhrase(std::string guessPhrase);//checks if player's guess is correct or not
};

#endif // PLAY_H_INCLUDED
