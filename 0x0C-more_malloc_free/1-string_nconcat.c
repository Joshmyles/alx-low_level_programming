#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - the function
 * @s1: input
 * @s2: input
 * @n: input
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *result;
len1 = (s1 != NULL) ? strlen(s1) : 0;
len2 = (s2 != NULL) ? strlen(s2) : 0;
if (n >= len2)
{
n = len2;
}
result = malloc(len1 + n + 1);
if (result == NULL)
{
return (NULL);
}
if (s1 != NULL)
{
strcpy(result, s1);
}
else
{
result[0] = '\0';
}
strncat(result, s2, n);
return (result);
}
