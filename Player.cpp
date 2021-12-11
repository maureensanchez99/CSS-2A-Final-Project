#include <iostream>
#include "Player.h"
#include "Wheel.h"
using namespace std;

Player::Player(){
  name = "unknown player";
  playerGuess = ' ';
  gameWinner = false;
}

Player::Player(string name_){
  name = name_;
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

char Player::getPlayerGuess() const{
  return playerGuess;
}

void Player::setGameWinner(bool winner){
    gameWinner = winner;
}

bool Player::getGameWinner() const{
    return gameWinner;
}

void Player::addToTotalScore(int score_){
  totalScore.push_back(score_);
}

void Player::displayAddedScores()
{
  int playerScore = 0;
  for (int i = 0; i < totalScore.size(); i++)
  {
    playerScore += totalScore[i];
  }
  cout << name << " has " << playerScore << " points.\n";
}
