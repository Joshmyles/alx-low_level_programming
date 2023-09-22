#include <main.h>

/**
 * *rot13 - the function
 * @str: input
 * Return: str
 */

char *rot13(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
{
char base = (*ptr >= 'a' && *ptr <= 'z') ? 'a' : 'A';
*ptr = ((*ptr - base + 13) % 26) + base;
}
ptr++;
}
return (str);
}
