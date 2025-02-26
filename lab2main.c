
#include <stdio.h>
#include "lab2.h"

int main(void)
{
    int number;
    int result;
    int seconds;
    int answer;
    
    printf("enter a number=    \n");
        scanf("%d", &number);

    result = lastDigit(number);

    printf("lastDigit(%d) = %d\n",number, result);

    printf("enter a number=     \n");
        scanf("%d", &seconds);

    answer = wholeMinutes(seconds);

    printf("(%d) is in (%d)wholeMinutes",seconds,answer);

    return 0;
    
}