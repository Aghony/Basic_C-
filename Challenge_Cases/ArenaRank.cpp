#include <iostream>

using namespace std;

int main () {
  int score;
  cin >> score;

  if (score >= 1000) {
    cout << "Rank: Legend" << endl;
  } if (score >= 500) {
    cout << "Rank: Epic" << endl;
  } else {
    cout << "Rank: Rookie" << endl;
  }
  
  return 0;
}