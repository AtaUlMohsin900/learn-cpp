// tm_sec - The seconds within a minute
// tm_min - The minutes within an hour
// tm_hour - The hour within a day (from 0 to 23)
// tm_mday - The day of the month
// tm_mon - The month (from 0 to 11 starting with January)
// tm_year - The number of years since 1900
// tm_wday - The weekday (from 0 to 6 starting with Sunday)
// tm_yday - The day of the year (from 0 to 365 with 0 being January 1)
// tm_isdst - Positive when daylight saving time is in effect, zero when not in effect and negative when unknown


#include <iostream>
#include <ctime>  // Import the ctime library
using namespace std;
 
int main () {
  struct tm datetime;
  time_t timestamp;

  datetime.tm_year = 2023 - 1900; // Number of years since 1900
  datetime.tm_mon = 12 - 1; // Number of months since January
  datetime.tm_mday = 17;
  datetime.tm_hour = 12;
  datetime.tm_min = 30;
  datetime.tm_sec = 1;
  // Daylight Savings must be specified
  // -1 uses the computer's timezone setting
  datetime.tm_isdst = -1;

  timestamp = mktime(&datetime);

  cout << ctime(&timestamp);
  return 0;
}
