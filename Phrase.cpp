#include <iostream>
#include <string>
#include "Phrase.h"
#include "Game.h"
#include <ctime>
#include <cstdlib>

using namespace std;

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

void Phrase::chooseNum(Game *object){
    int randNum = rand() % 5;

    std::string chosenCategory = getCategory(randNum);
    object -> setCategory(chosenCategory);

    std::string chosenPhrase = getPhrase(randNum);
    object -> setPhrase(chosenPhrase);
}

std::string Phrase::getCategory(int num){
    std::string chosen = category[num];
    return chosen;
}

std::string Phrase::getPhrase(int num){
    std::string chosen = phrase[num];
    return chosen;
}

void Phrase::displayPhrase(Game *object){
    chooseNum(object);
    string guessPhrase;

    string phrase = object -> getPhrase();
    object -> printsoFar(object, guessPhrase);

    cout << "\nCategory hint: " << object -> getCategory();
    cout << endl << endl;
}

