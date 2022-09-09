#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* This c script test the value of random assigned variable 'n' */
/**
* main -Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* my code goes here */
if (n > 0)
printf("%d is positive\n", n);

else if ( n < 0)
printf("%d is negative\n", n);

else 
printf ("%d is zero\n",n);
return (0);
}
