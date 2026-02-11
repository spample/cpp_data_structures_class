/*
 * Title: Odd or Even Finder
 * By: Luis Gonzalez
 * Date: 02/09/26
 *
 * Description:
 *
 * Write a program to test an integer value to determine if it is odd or even. 
 * As always, make sure your output is clear and complete. 
 * In other words, don’t just output yes or no. Your output should stand alone, like 
 * The value 4 is an even number. Hint: Use the remainder (modulo) operator.
*/

#include <iostream>

using namespace std;


int main() {

  int value;

  cout << "Enter a number to determine if Even or Odd: ";
  cin >> value;

  if (value % 2 == 0) {
    cout << "The number" << value << " is an Even number!" << endl;
  }
  else {
    cout << "The number " << value << " is an Odd number!" << endl;
  }

  return 0;
}
