/*
 * Title: Sorting 3 Integers
 * By: Luis Gonzalez
 * Date: 02/09/26
 *
 * Description:
 *
 * Write a program that prompts the user to enter three integer values, 
 * and then outputs the values in numerical sequence separated by commas. 
 * So, if the user enters the values 10 4 6, the output should be 4, 6, 10. 
 * If two values are the same, they should just be ordered together. 
 * So, the input 4 5 4 should give 4, 4, 5.
*/

#include <iostream>

using namespace std;

int main() {
  
  int a, b, c;
  
  cout << "Enter First Integer: ";
  cin >> a; 

  cout << "Enter Second Integer: ";
  cin >> b;
  
  cout << "Enter Third Integer: ";
  cin >> c;

  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }

  if (a > c) {
    int temp = a;
    a = c;
    c = temp;
  }

  if (b > c) {
    int temp = b;
    b = c;
    c = temp;
  }

  cout << "Smallest> " << a << ", " << b << ", " << c << " <Largest" << endl;

  return 0;

}
