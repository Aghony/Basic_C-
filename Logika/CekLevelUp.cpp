#include <iostream>

using namespace std;

int main() {
  int exp;
  cin >> exp;

  if (exp >= 100) {
    cout << "Level up" << endl;
  } else {
    cout << "Stay" << endl;
  }
  return 0;
}