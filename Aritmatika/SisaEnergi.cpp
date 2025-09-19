#include <iostream>

using namespace std;

int main() {
  int energy, cost;
  cin >> energy >> cost;
  int energi = energy - cost;
  cout << "Energi tersisa: " << energi << endl;
  return 0;
}