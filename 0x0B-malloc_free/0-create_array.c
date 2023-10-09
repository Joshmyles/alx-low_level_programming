#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - the function
 * @size: size of array
 * @c: char
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
char *array = (char *) malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
unsigned int i;
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
