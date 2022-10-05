#include <stdlib.h>
#include "main.h"
/*
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *_strdup(char *str)
{
char *pstr;
int i;
if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
i++;
}
pstr =  (char *) malloc (1 + i * sizeof(char)); //extra for the NULL
for (ptr == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
pstr[i] = str [i];
}
pstr[i] = '\0';
return (pstr);
}