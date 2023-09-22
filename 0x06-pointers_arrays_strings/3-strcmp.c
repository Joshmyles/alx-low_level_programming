#include "main.h"

/**
 * _strcmp - the function
 * @s1: input
 * @s2: input
 * Return: s1, s2
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
