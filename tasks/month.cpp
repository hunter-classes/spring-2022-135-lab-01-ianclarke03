/*Author: Ian Clarke
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: months.cpp, Lab 01

prompts the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years).
*/


#include <iostream>
using namespace std;

bool leap(int year)
{
  if (year % 4 != 0)
  cout << false;
  else if (year % 4 == 0)
  {
    if ((year % 100 == 0) && (year % 400 != 0))
      cout << false;
    else if ((year % 100 == 0) && (year % 400 == 0))
      cout << true;
    else
      cout << true;
  }
  return 0;
  }

int main()
{
  int year;
  cout << "Enter year: " << endl;
  cin >> year;
  
  int month;
  cout << "Enter month: " << endl;
  cin >> month;

  if (leap(year))
{
  if (month == 1)
    cout << "31 Days";
  else if (month == 2)
    cout << "29 Days";
  else if (month == 3)
    cout << "31 Days";
  else if (month == 4)
    cout << "30 Days";
  else if (month == 5)
    cout << "31 Days";
  else if (month == 6)
    cout << "30 Days";
  else if (month == 7)
    cout << "31 Days";
  else if (month == 8)
    cout << "31 Days";
  else if (month == 9)
    cout << "30 Days";
  else if (month == 10)
    cout << "31 Days";
  else if (month == 11)
    cout << "30 Days";
  else if (month == 12)
    cout << "31 Days";
}
  else
  {
  if (month == 1)
    cout << "31 Days";
  else if (month == 2)
    cout << "28 Days";
  else if (month == 3)
    cout << "31 Days";
  else if (month == 4)
    cout << "30 Days";
  else if (month == 5)
    cout << "31 Days";
  else if (month == 6)
    cout << "30 Days";
  else if (month == 7)
    cout << "31 Days";
  else if (month == 8)
    cout << "31 Days";
  else if (month == 9)
    cout << "30 Days";
  else if (month == 10)
    cout << "31 Days";
  else if (month == 11)
    cout << "30 Days";
  else if (month == 12)
    cout << "31 Days";
  }

  cout << endl;
  return 0;
}