#include "function_pointers.h"

/**
 * int_index - the function
 * @array: input array
 * @size: size of array
 * @cmp: pointer function
 *
 * Return: variables of -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
