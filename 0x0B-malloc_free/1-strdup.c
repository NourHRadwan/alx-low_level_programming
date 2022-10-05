#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char *_strdup(char *str)
{
char* pstr;
int i;
pstr =  (char*)malloc(sizeof(str));
for (i = 0; str[i] != '\0'; i++)
{
    pstr[i] = str [i];
}
return (char*)pstr;
}