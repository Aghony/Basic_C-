#include <iostream>

using namespace std;

int main() {
  int login, ticket;
  cin >> login >> ticket;

  if (login == 1 && ticket == 1) {
    cout << "Access" << endl; 
  } else {
    cout << "Denied" << endl;
  }

  return 0;
}