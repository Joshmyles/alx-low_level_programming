#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - the function
 * @min: input
 * @max: input
 * Return: array int
 */

int *array_range(int min, int max)
{
int num_elements;
int *arr, i;
if (min > max)
{
return (NULL);
}
num_elements = max - min + 1;
arr = (int *)malloc(num_elements *sizeof(int));
if (arr != NULL)
{
for (i = 0; i < num_elements; i++)
{
arr[i] = min + i;
}
}
return (arr);
}
