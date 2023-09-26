#include "main.h"

/**
 * _strstr - the function
 * @haystack: input
 * @needle: input
 * Return: @haystack or null
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *temp_haystack = haystack;
char *temp_needle = needle;
while (*temp_needle && (*temp_haystack == *temp_needle))
{
temp_haystack++;
temp_needle++;
}
if (!*temp_needle)
{
return (haystack);
}
haystack++;
}
return (NULL);
}
