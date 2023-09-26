#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the function
 * @a: input
 * @size: input
 * Return: something
 */

void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
for (int i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum1, sum2);
}
