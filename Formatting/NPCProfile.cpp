#include <iostream>
#include <string>

using namespace std;

int main() {
  string full_name, role;
  bool friendly;

  getline(cin, full_name);
  cin >> role >> friendly;
  
  cout << "NPC: " << full_name << endl;
  cout << "Role: " << role << endl;
  cout << "Friendly: " << friendly << endl;
  return 0;
}