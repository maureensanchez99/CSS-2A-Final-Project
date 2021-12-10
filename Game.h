//Parent class for project
#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <iostream>

class Game{
protected:
    std::string correctPhrase; //phrase that players have to guess; created by Phrase class
    std::string chosenCategory;
    std::string chosenPhrase; //phrase that starts as blank and will be updated with each correct guess
	char letterGuess; //player guesses a letter
    std::string guessPhrase; //or phrase
    int playerOption; //what player decides to do for their turn
    int score;

public:
    Game();
    std::string getPhrase() const; //gets the phrase the players are guessing from the Phrase class
    bool checkPhrase(std::string guessPhrase, Game *object);//checks if player's guess is correct or not
    void setCategory(std::string chosenCategory_);
    void setPhrase(std::string chosenPhrase_);
    void hiddenOut(); //hides letters of phrase and only shows amount of letters and words in phrase
    std::string getCategory() const;
};

#endif // GAME_H_INCLUDED
