#include <iostream>
using namespace std;

int main()
{
  int year;
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