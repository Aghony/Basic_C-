#include <iostream>
#include <string>

using namespace std;

int main () {
  string full_name;
  getline(cin, full_name);
  cout << "Player: " << full_name << endl;
  return 0;
}