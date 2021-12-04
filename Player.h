#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
using namespace std;
#include <vector>
#include <string>

class Player 
{
private:
  string name;
  vector<int> totalScore;
  char playerGuess;
public:
  Player();
  Player(string name_);
  void setName(string name_);
  string getName() const;
  void setPlayerGuess(char playerGuess_);
  char getPLayerGuess() const;
  void addToTotalScore(int score_);
  void displayAddedScores();

}

#endif // PLAYER_H_INCLUDED
