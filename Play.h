#ifndef PLAY_H_INCLUDED
#define PLAY_H_INCLUDED

#include <iostream>
#include <string>

class Play {
private:
    std::string guess;
    std::string correctPhrase;
    int playerOption;

public:
    Play(); //constructor
    void playGame(); //begins round for player
    std::string guessLetter(); //player guesses a letter
    std::string guessPhrase(); //player guesses the phrase
    bool checkLetter(std::string guess); //checks if player's guess is correct or not
    bool checkPhrase(std::string guess);//checks if player's guess is correct or not
    std::string getPhrase() const; //gets the phrase the players are guessing from the Phrase class
    void turnOption(); //player decides if they want to guess another letter or guess the phrase
};

#endif // PLAY_H_INCLUDED
