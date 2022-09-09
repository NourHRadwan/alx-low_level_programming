#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* This script test if the last digit of n is <6 or >5 or equal to 0*/

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* my code starts here*/
int lastDigit;
lastDigit = n % 10;
printf("Last digit of %d is ", n);
if (lastDigit > 5)
printf("%d and is greater than 5\n", lastDigit);
else if (lastDigit < 6 && lastDigit != 0)
printf("%d and is less than 6 and not 0\n", lastDigit);
else
printf("%d and is 0\n", lastDigit);
return (0);
}
