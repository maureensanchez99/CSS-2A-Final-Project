#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <iostream>

class Game{
private:
	std::string guess; //player guesses a letter or phrase
    std::string correctPhrase; //phrase that players have to guess; created by Phrase class
    int playerOption; //what player decides to do for their turn
    int score;

public:
    std::string getPhrase() const; //gets the phrase the players are guessing from the Phrase class
    void displayPhrase();
    void turnOPtion();
    void updateScore();

};

#endif // GAME_H_INCLUDED
