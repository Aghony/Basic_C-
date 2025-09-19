#include <iostream>
#include <string>

using namespace std;

int main() {
  string map_name, mode;
  int players;
  float duration;

  getline(cin, map_name);
  cin >> mode >> players >> duration;
  
  cout << "Map: " << map_name << endl;
  cout << "Mode: " << mode << endl;
  cout << "Players: " << players << endl;
  cout << "Duration: " << duration << endl;
}