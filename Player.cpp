#include <iostream>
#include "Player.h"
#include "Wheel.h"
using namespace std;

Player::Player(){
  name = "unknown player";
  totalScore = {0};
  playerGuess = ' ';
}

Player::Player(string name_){
  name = name_;
  totalScore = {0};
}

void Player::setName(string name_){
  name = name_;
}

string Player::getName() const{
  return name;
}

void Player::setPlayerGuess(char playerGuess_){
  playerGuess = playerGuess_;
}

char Player::getPLayerGuess() const{
  return playerGuess;
}

void Player::addToTotalScore(int score_){
  totalScore.push_back(score_);
}

void Player::displayAddedScores(){
  int playerScore = 0;
  for (int i = 0; i < totalScore.size(); i++){
    playerScore += totalScore[i];
  }
  cout << name << " currently has " << playerScore << ".\n";
}
