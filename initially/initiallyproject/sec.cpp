#include <iostream>
#include <string>
using namespace std;
int main () {
  string mystr;
  cout << "Wher is the cake? ";
  getline (cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team? ";
  getline (cin, mystr);
  cout << "I like " << mystr << " too!\n";
  return 0;
}