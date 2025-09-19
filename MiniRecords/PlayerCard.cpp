#include <iostream>
#include <string>

using namespace std;

int main () {
  string full_name;
  int level;
  bool login;
  getline(cin, full_name);
  cin >> level >> login;
  cout << "Name: " << full_name << endl;
  cout << "Level: " << level << endl;
  cout << "Login: " << login << endl;
  return 0;
}