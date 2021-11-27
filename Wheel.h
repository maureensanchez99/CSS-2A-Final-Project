#ifndef WHEEL_H_INCLUDED
#define WHEEL_H_INCLUDED
using namespace std;

class Wheel 
{
private:
 string scores[25];

public:
  Wheel();
  void setScores ();
  string getRandomScore();
  void displayScores();

};

#endif // WHEEL_H_INCLUDED
