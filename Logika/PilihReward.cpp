#include <iostream>

using namespace std;

int main() {
  int score, level;
  cin >> score >> level;

  if (score >= 500 || level >= 10) {
    cout << "Reward" << endl;
  } else {
    cout << "No Reward" << endl;
  }

  return 0;
}