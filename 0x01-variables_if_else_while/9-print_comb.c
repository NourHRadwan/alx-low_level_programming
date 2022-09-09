#include <stdlib.h>
#include <stdio.h>

/* The script prints all possible combinations of single-digit numbers. */
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
if (i < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
