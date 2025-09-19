#include <iostream>

using namespace std;

int main() {
  int pull, rate;
  cin  >> pull >> rate;
  int result = (pull * rate) / 100;
  cout << "Rare: " << result << endl;
  return 0;
}