#include <stdlib.h>
#include <stdio.h>

/* The script prints all the numbers of base 16 in lowercase.*/
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
