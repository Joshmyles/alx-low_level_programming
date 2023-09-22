#include "main.h"

/**
 * *_strcat - the function
 * @dest: input
 * @src: input
 * Return: output
 */

char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*dest)
{
dest++;
}
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (result);
}
