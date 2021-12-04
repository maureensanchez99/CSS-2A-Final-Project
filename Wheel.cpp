#include <iostream>
#include "Wheel.h"
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

Wheel::Wheel()
{
  scores[0] = "$300";
  scores[1] = "$700";
  scores[2] = "LOSE A TURN";
  scores[3] = "$800";
  scores[4] = "$650";
  scores[5] = "$500";
  scores[6] = "BANKRUPT";
  scores[7] = "$5000";
  scores[8] = "$600";
  scores[9] = "$700";
  scores[10] = "$650";
  scores[11] = "$500";
  scores[12] = "$450";
  scores[13] = "$350";
  scores[14] = "$550";
  scores[15] = "$800";
  scores[16] = "$3000";
  scores[17] = "BANKRUPT";
  scores[18] = "$3000";
  scores[19] = "$450";
  scores[20] = "$900";
  scores[21] = "$300";
  scores[22] = "$650";
  scores[23] = "$550";
  scores[24] = "$800";
}

string Wheel::getRandomScore()
{
  srand(time(0));
  int score_ = (rand()%25)+1;
  return scores[score_];
}

void Wheel::displayScores()
{
  cout << "WHEEL OF FORTUNE SCORES\n";
  for (int i = 0 ; i < 25 ; i++)
  {
    cout << scores[i] << " | ";
  }
  cout << endl;
}
