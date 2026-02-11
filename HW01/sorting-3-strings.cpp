/*
 * Title: Sorting 3 Strings
 * By: Luis Gonzalez
 * Date: 02/09/26
 *
 * Description:
 *
 * Do problem 4, but with three string values. So, if the user enters the values Steinbeck 
 * Hemingway Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck.
*/

#include <iostream>
#include <string>

using namespace std;



int main() {

  string a, b, c;

  cout << "Enter First String: ";
  cin >> a;

  cout << "Enter Second String: ";
  cin >> b;

  cout << "Enter Third String: ";
  cin >> c;


  if (a > b) {
    string temp = a;
    a = b;
    b = temp;
  }

  if (a > c) {
    string temp = a;
    a = c;
    c = temp;
  }

  if (b > c) {
    string temp = b;
    b = c;
    c = temp;
  }

  cout << "Smallest> " << a << ", " << b << ", " << c << " <Largest" << endl;

  return 0;




}
