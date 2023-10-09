#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - the function
 * @str: input pointer
 * Return: duplicate string of pointer
 */

char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
size_t len = strlen(str);
char *dup_str = (char *)malloc((len + 1) * sizeof(char));
if (dup_str == NULL)
{
return (NULL);
}
strcpy(dup_str, str);
return (dup_str);
}
