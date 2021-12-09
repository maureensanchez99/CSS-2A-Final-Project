#ifndef PHRASE_H_INCLUDED
#define PHRASE_H_INCLUDED
#include "Game.h"
#include <iostream>
#include <string>

class Phrase{
    protected:
        std::string category[5]; //array provides a category as a clue to what the phrase might be
        std::string phrase[5]; //phrase to be guessed by player
        std::string chosenCategory;
        std::string chosenPhrase;

    public:
        Phrase(); //default constructor
        void chooseNum();
        std::string getCategory() const;
        std::string getPhrase() const;
};

#endif // PHRASE_H_INCLUDED
