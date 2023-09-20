#include <stdio.h>

/**
 * point_array - the function
 * @a: input
 * @n: input
 * Return: output
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
