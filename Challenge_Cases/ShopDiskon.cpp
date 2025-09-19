#include <iostream>

using namespace std;

int main() {
  int price, count;
  cin >> price >> count;
  int total = price * count;

  if (total > 5000) {
    total = total - (total * 10/100);
  }

  cout << "Total: " << total << endl;

  return 0;
}