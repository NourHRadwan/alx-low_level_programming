#include <stdlib.h>
#include <stdio.h>
/* The script prints the lowercase alphabet in reverse. */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
