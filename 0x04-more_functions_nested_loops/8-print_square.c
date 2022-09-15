#include "main.h"

/**
 * print_square - function with int type one argument
 * @size: 1st int argument
 *
 * Description: nested loops to pring square with new line
 * Return: na
 */
void print_square(int size)
{
if (size <= 0)
{
	_putchar('\n');
}
else
{
	int i, j;
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
}
_putchar('\n');
}
}
