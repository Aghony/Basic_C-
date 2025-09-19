#include <iostream>
#include <string>

using namespace std;

int main() {
  string ticket_id;
  char category_char;
  bool valid;

  cin >> ticket_id >> category_char >> valid;
  
  cout << "Ticket: " << ticket_id << endl;
  cout << "Category: " << category_char << endl;
  cout << "Valid:  " << valid << endl;
  return 0;
}