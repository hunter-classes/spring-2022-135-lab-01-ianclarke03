/*
Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: smaller3.cpp, Lab 01

prompts the user to input three integer numbers and returns the smallest of the three.
*/

#include <iostream>
using namespace std;

int main()
{
  int a,b,c;
  cout << "Input three numbers.";
  cin >> a;
  cin >> b;
  cin >> c;

  if (a < b)
  {
    if (a < c)
      cout << "The smaller of the three is " << a << endl;
    }
  else if (b < c)
  {
    if (b < a)
      cout << "The smaller of the three is " << b << endl;
  }
  else if (c < a)
  {
    if (c < b)
      cout << "The smaller of the three is " << c << endl;
  }
  
  return 0;
}