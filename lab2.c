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

int numSeconds(int hours, int minutes, int seconds)
{
//a=hours=2, b=minutes=3, c=seconds=4

int NewMin = hours * 60;
int NewSec = NewMin * 60 ;

   return NewSec; 

}