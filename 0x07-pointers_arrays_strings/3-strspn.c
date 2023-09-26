#include "main.h"

/**
 * _strspn - the function
 * @s: input pointer
 * @accept: input pointer
 * Return: the result
 */


unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int isAccept = 0;
while (*s && *s != '0')
{
isAccept = 0;
char *temp = accept;
while (*temp)
{
if (*s == *temp)
{
isAccept = 1;
break;
}
temp++;
}
if (isAccept)
{
count++;
s++;
}
else
{
break;
}
}
return (count);
}
