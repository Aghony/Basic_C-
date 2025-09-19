#include <iostream>
#include <string>

using namespace std;

int main () {
  string name;
  float hp;
  char type_char;
  cin >> name >> hp >> type_char;
  cout << "Monster: " << name << endl;
  cout << "HP: " << hp << endl;
  cout << "Type: " << type_char << endl;
  return 0;
}