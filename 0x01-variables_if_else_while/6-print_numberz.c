#include <stdlib.h>
#include <stdio.h>
/* This script prints all single digit numbers of base 10 starting from 0*/
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
