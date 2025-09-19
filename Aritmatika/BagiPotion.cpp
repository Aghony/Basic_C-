#include <iostream>

using namespace std;

int main() {
  int potion, player;
  cin >> potion >> player;
  int potions = potion / player;
  cout << "Potion per player: " << potions << endl;
  return 0;
}