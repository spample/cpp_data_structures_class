#include <iostream>
using namespace std;

int main() {
  double val1, val2;
  
  cout << "Enter first value " ;
  cin >> val1;

  cout << "Enter second value " ;
  cin >> val2;

  double smaller, larger;

  if (val1 > val2) {
    larger = val1;
    smaller = val2;
  }
  else {
    larger = val2;
    smaller = val1;
  }
  
  cout << "Larger value: " << larger << endl;
  cout << "Smaller value: " << smaller << endl;
  cout << "Sum: " << val1 + val2 << endl;
  cout << "Difference: " << val1 - val2 << endl;
  cout << "Product: " << val1 * val2 << endl;
  
  if (val2 != 0) {
    cout << "       " << val1 << endl
         << "Ratio: " << "-" << " ~= " << val1 / val2 <<endl
         << "       " << val2 << endl;
  }
  else {
    cout << "Cannot divide by 0!" << endl;
  }
  return 0;
}
