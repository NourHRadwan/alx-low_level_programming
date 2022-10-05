#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - function with two arguments
 * @s1: char type pointer
 * @s2: char type pointer
 *
 * Description: concatenates two strings
 * Return: Null for failure or concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int i, i2, j, k;
char *pstr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i] != '\0')
i++;
i2 = 0;
while (s2[i2] != '\0')
i2++;
pstr = (char *)malloc(sizeof(char) * i + i2 + 1);
if (pstr == NULL)
return (NULL);
j = 0;
while (s1[j] != '\0')
{
pstr[j] = s1[j];
j++;
}
k = 0;
while (s2[k] != '\0')
{
pstr[j] = s2[k];
k++;
j++;
}
pstr[j] = '\0';
return (pstr);
}