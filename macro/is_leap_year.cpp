#include "is_leap_year.h"
#define ENABLE_TRACE_FUNC //should be defined before debug.h
#include "debug.h"

using namespace debug;

bool isLeapYear(int year)
{
  LOCAL_FUNC_ENTER();
  if ((year%4==0) && (year%100) || (year%400==0))
    return true;
  else 
    return false;  
  LOCAL_FUNC_LEAVE();
}
