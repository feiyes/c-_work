#include <iostream>
#include "is_leap_year.h"
using namespace std;

int main()
{
  int year = 2014;
  int ret = isLeapYear(year);

  if (ret)
    cout << "leap year" << endl;
  else
    cout << "not a leap year!" << endl;

  return 0;  
}
