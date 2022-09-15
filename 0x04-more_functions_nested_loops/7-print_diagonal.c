#include "main.h"

/**
 * print_diagonal - function with one integer argument
 * @n: 1st int type argument
 *
 * Description: draw a diagonal line on terminal with loops
 * Return: na
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');

				else if (j < i)
					_putchar(' ');

			}
			_putchar('\n');
		}

	}

}
