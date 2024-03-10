#include "main.h"

/**
 * *_strchr - the function
 * @s: input
 * @c: input
 * Return: s or nothing
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
else
{
return (NULL);
}
}
