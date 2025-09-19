#include <iostream>

using namespace std;

int main() {
  int hp;
  cin >> hp;

  if(hp <= 0) {
    cout << "Dead" << endl;
  } else {
    cout << "Alive" << endl;
  }
  return 0;
}