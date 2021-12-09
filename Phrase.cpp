#include <iostream>
#include <string>
#include "Phrase.h"
#include "Game.h"
#include <ctime>
#include <cstdlib>

Phrase::Phrase(){
    category[0] = "Programming";
    category[1] = "Popular Anime";
    category[2] = "Salinas School";
    category[3] = "Computer Science Pioneers";
    category[4] = "Local Attractions";

    phrase[0] = "object oriented programming";
    phrase[1] = "demon slayer";
    phrase[2] = "hartnell community college";
    phrase[3] = "ada lovelace";
    phrase[4] = "monterey bay aquarium";
}

void Phrase::chooseNum(){
    int randNum = rand() % 5;
    chosenCategory = category[randNum];
    chosenPhrase = phrase[randNum];
}

std::string Phrase::getCategory() const{
    return chosenCategory;
}

std::string Phrase::getPhrase() const{
    return chosenPhrase;
}

