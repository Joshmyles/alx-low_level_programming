#include "main.h"

/**
 * print_diagonal - the function
 * @n: input value
 * Return: a triangle
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int spaces = 0;
int i;
while (n > 0)
{
for (i = 0; i < spaces; i++)
{
_putchar(' ')'
}
_putchar('\\');
_putchar('\n');
spaces++;
n--;
}
}
}
