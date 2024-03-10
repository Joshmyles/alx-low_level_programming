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
while (*s != '\0')
{
char *ptr = accept;
while (*ptr != '\0')
{
if (*s == *ptr)
{
break;
}
ptr++;
}
if (*ptr != '\0')
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
