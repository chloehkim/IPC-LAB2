
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

    printf("(%d) is in (%d)wholeMinutes \n",seconds,answer);
    
    int a,b,c, sum, mid;

    printf("enter hours =  \n");
    scanf("%d", &a);


    printf("enther minutes =    \n");
    scanf("%d", &b);
    printf("enter seconds =   \n");
    scanf("%d", &c);

    int NewSec = numSeconds(a,b,c);
    mid = b * 60 ;   
    sum = NewSec + mid + c;
    printf("Thus the total number of seconds = %d + %d + %d = %d\n", NewSec,mid,c, sum);

    return 0;
    
}