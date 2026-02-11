/*
 * Title: meter to kilometers converter
 * By: Luis Gonzalez
 * Date: 02/09/26
 *
 * Description:
 *
 * Write a program in C++ that converts from miles to kilometers. 
 * Your program should have a reasonable prompt for the user to enter a number of miles. 
 * Hint: A mile is 1.609 kilometers.
*/

#include <iostream>

using namespace std;


int main() {
  double miles;
  double kilometers;

  cout << "Enter miles: ";
  cin >> miles;

  kilometers = miles * 1.609;

  cout << miles << " miles equal to " << kilometers << " kilometers";
}
