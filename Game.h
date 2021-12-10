//Parent class for project
#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <iostream>

class Game{
protected:
    std::string correctPhrase; //phrase that players have to guess; created by Phrase class
	char letterGuess; //player guesses a letter
    std::string guessPhrase; //or phrase
    int playerOption; //what player decides to do for their turn
    int score;
    std::string chosenCategory;
    std::string chosenPhrase;

public:
    Game();
    std::string getPhrase() const; //gets the phrase the players are guessing from the Phrase class
    void turnOption();// player chooses how they move onto their next move if their first move of guessing a letter is correct
    bool checkPhrase(std::string guessPhrase);//checks if player's guess is correct or not
    void setCategory(std::string chosenCategory_);
    void setPhrase(std::string chosenPhrase_);
    std::string getCategory() const;
};

#endif // GAME_H_INCLUDED
