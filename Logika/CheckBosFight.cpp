#include <iostream>

using namespace std;

int main() {
  int hp, level;
  cin >> hp >> level;

  if ( hp >= 200 && level >= 15){
    cout << "Fight" << endl;
  } else {
    cout << "Not ready" << endl;
  }

  return 0;
}