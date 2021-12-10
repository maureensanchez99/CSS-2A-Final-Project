#include <iostream>
#include <string>
#include "Phrase.h"
#include "Game.h"
#include <ctime>
#include <cstdlib>

using namespace std;

Phrase::Phrase(){
    chosenCategory = "";
    chosenPhrase = "";

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
    std::string chosenCategory = getCategory(randNum);
    setCategory(chosenCategory);
    std::string chosenPhrase = getPhrase(randNum);
    setPhrase(chosenPhrase);
}

std::string Phrase::getCategory(int num){
    std::string chosen = category[num];
    return chosen;
}

std::string Phrase::getPhrase(int num){
    std::string chosen = phrase[num];
    return chosen;
}

void Phrase::setCategory(std::string chosenCategory_){
    chosenCategory = chosenCategory_;
}

void Phrase::setPhrase(std::string chosenPhrase_){
    chosenPhrase = chosenPhrase_;
}

void Phrase::displayPhrase(){
    chooseNum();
    for(int i = 0; i < chosenPhrase.size(); i++){
        cout << chosenPhrase[i] << " ";
    }
}

