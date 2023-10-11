#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function we use
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
