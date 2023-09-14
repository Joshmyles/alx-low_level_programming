#include "main.h"

/**
 * print_line - the function
 * @n: input
 * Return: nothing
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('-');
n--;
}
_putchar('\n');
}
}
