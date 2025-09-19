#include <iostream>

using namespace std;

int main() {
  int damage, combo, bonus;
  cin >> damage >> combo >> bonus;
  int Total = damage * combo + bonus;
  cout << "Total damage: " << Total << endl;
  return 0;
}