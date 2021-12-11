#ifndef WHEEL_H_INCLUDED
#define WHEEL_H_INCLUDED
using namespace std;

class Wheel 
{
private:
  int scores[25];

public:
  Wheel(); // the scores are set in the array, they can't be altered
  int getRandomScore();// returns a random score
  void displayScores(); // displays all the possibe scores

};

#endif // WHEEL_H_INCLUDED
