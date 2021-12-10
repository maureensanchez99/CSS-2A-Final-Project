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
    bool playGame(Player *player, Game *object);//begins round for player
    bool guessLetter(Game *object);//player guesses a letter
    bool guessPhrase(Game *object);//player guesses the phrase
    bool checkLetter(char guessLetter, Game *object);//checks if player's guess is correct or not
    bool turnOption(Game *object);//player decides what they want to do if their answer is correct
};

#endif // PLAY_H_INCLUDED
