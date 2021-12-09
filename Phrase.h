#ifndef PHRASE_H_INCLUDED
#define PHRASE_H_INCLUDED
#include "Game.h"
#include <iostream>
#include <string>

class Phrase{
    protected:
        std::string category[5]; //array provides a category as a clue to what the phrase might be
        std::string phrase[5]; //phrase to be guessed by player

    public:
        Phrase(); //default constructor
        void setCategory();
        std::string getCategory() const;
        void setPhrase();
        std::string getPhrase() const;
};

#endif // PHRASE_H_INCLUDED
