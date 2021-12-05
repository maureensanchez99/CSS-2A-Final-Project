#ifndef PLAY_H_INCLUDED
#define PLAY_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include "Game.h"
#include "Player.h"

class Play: public Game {
private:
    std::string guess;
    int playerOption;

public:
    Play();//constructor
    bool playGame();//begins round for player
    bool guessLetter();//player guesses a letter
    bool guessPhrase();//player guesses the phrase
    bool checkLetter(char guessLetter);//checks if player's guess is correct or not
};

#endif // PLAY_H_INCLUDED
