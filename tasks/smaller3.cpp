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
  cin >> a;
  cin >> b;
  cin >> c;
  
  switch(a,b,c) {
    case ((a<b) && (a<c)):
    cout << "The smaller of the three is " << a;
    break;
    case ((b < c) && (b < a)):
    cout << "The smaller of the three is " << b;
    break;
    case ((c < b) && (c < a)):
    cout << "The lesser of the three is " << c;
    break;
  }
  return 0;
}