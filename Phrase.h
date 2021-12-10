#ifndef PHRASE_H_INCLUDED
#define PHRASE_H_INCLUDED
#include "Game.h"
#include <iostream>
#include <string>

class Phrase{
    protected:
        std::string chosenCategory;
        std::string chosenPhrase;

    public:
        Phrase(); //default constructor
        void chooseNum();
};

#endif // PHRASE_H_INCLUDED
