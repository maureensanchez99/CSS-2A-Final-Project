#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
using namespace std;
#include <vector>
#include <string>

class Player {
protected:
    bool gameWinner;//by end of game whoever has the most points, this variable for this player will be true

private:
    string name;
    vector<int> totalScore;//holds players total score throughout the game
    char playerGuess;

public:
    Player();
    Player(string name_);
    void setName(string name_);
    string getName() const;
    void setPlayerGuess(char playerGuess_);
    char getPlayerGuess() const;
    void setGameWinner(bool winner);
    bool getGameWinner() const;
    void addToTotalScore(int score_);
    void displayAddedScores();
};

#endif // PLAYER_H_INCLUDED
