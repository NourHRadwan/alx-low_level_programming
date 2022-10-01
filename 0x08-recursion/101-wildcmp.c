#include "main.h"

/**
* wildcmp - function with two argument
* @s1 - char type pointer 1st argument
* @s2 - char type pointer 2nd argument
*
* Description: compare two strings and return
* Return: 1 for identical, 0 for other
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
return (0);
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
return (0);
}
