#include <stdio.h>
#include "lab2.h"

int lastDigit(int number)
{
    int lastDigit;
    lastDigit = number % 10;
    return lastDigit;
}

int wholeMinutes(int seconds)
{
    int wholeMinutes;
wholeMinutes = seconds / 60;
 return wholeMinutes;
}
