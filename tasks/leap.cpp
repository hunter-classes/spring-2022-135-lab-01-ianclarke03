/*Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: smaller.cpp, Lab 01

prompts the user to input an integer representing a year number. If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year.
*/

#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "Enter Year:";
  cin >> year;

  if (year % 4 != 0)
  cout << "Common year";
  else if (year % 4 == 0)
  {
    if ((year % 100 == 0) && (year % 400 != 0))
      cout << "Common year";
    else if ((year % 100 == 0) && (year % 400 == 0))
      cout << "Leap year";
    else
      cout << "Leap year";
  }
  return 0;
}