//
// Created by rz on 16/2/28.
//

#include "dateutil.h"

/**
 * One of the nice functions provided by php is checkdate(). It checks the range on the month, day and year to ensure your date is valid. It allows you to test for leap years and 31 day months coming from user input.

If you notice, any year less than 1582 returns as an invalid date. This is because our current system Gregorian calendar began in 1582. As a matter of trivia, Thursday, 4 October 1582 of the Julian calendar was followed by the first day of the Gregorian calendar, Friday, 15 October 1582. Those days were skipped in order to resynchronize the calendar with the earth's rotation around the sun.

Each day is a rotation of the earth on its axis, and each year a revolution around the sun. It turns out that one revolution around the sun takes 365.2425 days. In order to compensate for the nearly quarter day, leap days were are added on february 29th every 4 years. Years that are evenly divisible by 100 are not leap years, unless they are also evenly divisible by 400, in which case they are leap years. This keeps the our calendar years in sync with earth's revolutions around the sun.
 */
bool checkdate(int m, int d, int y) {
    //gregorian dates started in 1582
    if (!(1582 <= y))//comment these 2 lines out if it bothers you
        return false;
    if (!(1 <= m && m <= 12))
        return false;
    if (!(1 <= d && d <= 31))
        return false;
    if ((d == 31) && (m == 2 || m == 4 || m == 6 || m == 9 || m == 11))
        return false;
    if ((d == 30) && (m == 2))
        return false;
    if ((m == 2) && (d == 29) && (y % 4 != 0))
        return false;
    if ((m == 2) && (d == 29) && (y % 400 == 0))
        return true;
    if ((m == 2) && (d == 29) && (y % 100 == 0))
        return false;
    if ((m == 2) && (d == 29) && (y % 4 == 0))
        return true;

    return true;
}