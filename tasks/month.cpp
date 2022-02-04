#include <iostream>
using namespace std;

bool leap(year)
{
  //int year;
  //cin >> year;
  if (year % 4 != 0)
  cout << False;
  else if (year % 4 == 0)
  {
    if ((year % 100 == 0) && (year % 400 != 0))
      cout << False;
    else if ((year % 100 == 0) && (year % 400 == 0))
      cout << True;
    else
      cout << True;
  }
  return 0;
  }


int main()
{
  int year;
  int month;
  cin >> year;
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
  return 0;
}