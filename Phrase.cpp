#include <iostream>
#include <string>
#include "Phrase.h"
#include "Game.h"
#include <ctime>
#include <cstdlib>

Phrase::Phrase(){
    chosenCategory = "";
    chosenPhrase = "";
}

void Phrase::chooseNum(){
    Game object;
    int randNum = rand() % 5;
    std::string chosenCategory = object.getCategory[randNum];
    std::string chosenPhrase = object.getPhrase[randNum];
}
