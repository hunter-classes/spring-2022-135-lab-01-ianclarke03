/*Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: smaller.cpp, Lab 01

prompts the user to input two integer numbers and returns the smaller of the two.
*/

#include <iostream>
using namespace std;

int main()
{
  int a,b;
  cout << "Enter the first number:";
  cin >> a;
  cout << "Enter the second number:";
  cin >> b;

  if (a > b) {
    cout << "The smaller of the two is " << b;
    }
  else if (b > a) {
    cout << "The smaller of the two is " << a << endl;
  }
  return 0;
}