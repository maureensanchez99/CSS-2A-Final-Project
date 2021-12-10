#ifndef PHRASE_H_INCLUDED
#define PHRASE_H_INCLUDED
#include "Game.h"
#include <iostream>
#include <string>

class Phrase{
    protected:
        std::string chosenCategory;
        std::string chosenPhrase;
        std::string category[5]; //array provides a category as a clue to what the phrase might be
        std::string phrase[5]; //phrase to be guessed by player

    public:
        Phrase(); //default constructor
        void chooseNum();
        std::string getCategory(int num);
        std::string getPhrase(int num);
        void setCategory(std::string chosenCategory_);
        void setPhrase(std::string chosenPhrase_);
        void displayPhrase(); //displays phrase in progress for players
};

#endif // PHRASE_H_INCLUDED
