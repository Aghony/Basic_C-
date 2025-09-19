#include <iostream>

using namespace std;

int main() {
  int kill, assist, death, objective;
  cin >> kill >> assist >> death >> objective;
  int result = (kill*100 + assist*50) - (death*100) + (objective*200);
  cout << "Final Score: " << result << endl;
  return 0;
}