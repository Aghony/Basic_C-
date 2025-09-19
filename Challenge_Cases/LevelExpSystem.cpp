#include <iostream>

using namespace std;

int main() {
  int LevelAwal, exp;
  cin >> LevelAwal >> exp;
  
  int tambahLevel = exp / 100;
  int sisaExp = exp % 100;

  int newlevel = LevelAwal + tambahLevel;
  
  cout << "Level: " << newlevel << endl;
  cout << "Sisa EXP: " << sisaExp << endl;
  return 0;
}