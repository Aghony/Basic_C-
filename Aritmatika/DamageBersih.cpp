#include <iostream>
#include <string>

using namespace std;

int main () {
  int damage, defense;
  cin >> damage >> defense;
  int damage_bersih = damage - defense;
  cout << "Damage Bersih: " << damage_bersih << endl;
  return 0;
}