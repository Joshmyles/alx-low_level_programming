#include "main.h"

/**
 * *_memset - the function
 * @s: the pointer
 * @b: input
 * @n: input
 * Return: ouput of @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
