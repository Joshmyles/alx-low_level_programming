#include "main.h"

/**
 * _strpbrk - the function
 * @s: input
 * @accept: input
 * Return: s or null
 */


char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *temp = accept;
while (*temp)
{
if (*s == *temp)
{
return (s);
}
temp++;
}
s++;
}
return (NULL);
}
