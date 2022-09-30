#include "main.h"
/**
*_isalpha -return output 1 for letter and 0 for other
*@c: is input
*
*Description:if/else to check for upper and lower case
*Return: return 1 if a letter, lower or uppercase and 0 is not
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
return (1);
else
return (0);
}
