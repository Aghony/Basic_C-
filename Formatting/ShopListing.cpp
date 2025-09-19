#include <iostream>
#include <string>

using namespace std;

int main() {
  string item;
  int price, stock;
  bool locked;
  cin >> item >> price >> stock >> locked;
  cout << "Item: " << item << endl;
  cout << "price: " << price << endl;
  cout << "stock: " << stock<< endl;
  cout << "locked: " << locked << endl;
  return 0;
}