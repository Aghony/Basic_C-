#include <iostream>

using namespace std;

int main() {
  int goldEarned, bonus, time;
  cin >> goldEarned >> bonus >> time;
  int efficiency = (goldEarned + bonus) / time;
  cout << "Efficiency: " << efficiency << endl;
  return 0;
}