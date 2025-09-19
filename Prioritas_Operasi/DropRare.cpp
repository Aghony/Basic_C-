#include <iostream>

using namespace std;

int main() {
  int rareitem, totalitem;
  cin >> rareitem >> totalitem;
  int Drop = (rareitem * 100) / totalitem;
  cout << "Drop Rare: " << Drop << "%" << endl;
  return 0;
}