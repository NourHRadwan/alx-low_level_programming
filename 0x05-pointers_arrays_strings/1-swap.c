#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
/**
 * reset_to_98 - function with one argument
 * @n: int type pointer n
 *
 * Description: using pointer as parameter to update value it points to 98
 * Return: value
 */
void reset_to_98(int *n)
{
*n = 98;
}
