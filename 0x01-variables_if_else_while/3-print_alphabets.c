#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* This script  prints the alphabet in lowercase, and then in uppercase */

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i <= 51; i++)
{
putchar(letters[i]);
}
putchar('\n');
return (0);
}
