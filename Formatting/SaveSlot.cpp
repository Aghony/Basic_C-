#include <iostream>
#include <string>

using namespace std;

int main(){
  int slot, level;
  string name;
  float hours;

  cin >> slot >> name >> level >> hours;
  
  cout << "Slot: " << slot << endl;
  cout << "Name: " << name << endl;
  cout << "Level: " << level << endl;
  cout << "Hours: " << hours << endl;
  return 0;
}