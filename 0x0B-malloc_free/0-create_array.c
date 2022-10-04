#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
char *pc;
unsigned int i;
if( size == 0)
return(NULL);
pc = malloc(sizeof(c)*size);
if (pc == NULL)
return NULL;
for(i = 0; i< size; i++)
pc[i] = c;
return(pc);
}
