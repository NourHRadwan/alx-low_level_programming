#include "main.h"
/**
 * main - Entry point
 *
 * description: 'program that prints _putchar, followed by a new line.'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ int c = 0;
char stringC[] = "_putchar";
for (c = 0; stringC[c] != '\0'; c++)
_putchar(stringC[c]);
_putchar('\n');
return (0);
}
