#include <iostream>

using namespace std;

int main() {
  int kill, assist, death;
  cin >> kill >> assist >> death;
  int skor = (kill * 100 + assist * 50) - death * 75;
  cout << "Skor: " << skor << endl;
  return 0;
}