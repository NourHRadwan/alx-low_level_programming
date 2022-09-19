#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
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
=======
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
>>>>>>> b9c61821707d94b576635b064a087df69440275c
}
