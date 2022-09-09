#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* This script print the alphabet in lowercase */

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char lowerCase;
for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
putchar(lowerCase);
}
putchar('\n');
return (0);
}

