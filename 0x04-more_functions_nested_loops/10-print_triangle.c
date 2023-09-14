#include "main.h"

/**
 * print_triangle - function
 * @size: the size of triangle
 * Return: the triangle itself
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
