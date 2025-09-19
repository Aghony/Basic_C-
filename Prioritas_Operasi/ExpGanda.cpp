#include <iostream>

using namespace std;

int main() {
  int exp, bonus, mutliplier;
  cin >> exp >> bonus >> mutliplier;
  int Total = (exp + bonus) * mutliplier;
  cout << "Total EXP: " << Total << endl;
  return 0;
}