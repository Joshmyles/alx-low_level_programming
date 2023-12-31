#include "main.h"

/**
 * *_strncat - the function
 * @dest: the input
 * @src: input
 * @n: input
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{
char *result = dest;
while (*dest)
{
dest++;
}
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (result);
}
