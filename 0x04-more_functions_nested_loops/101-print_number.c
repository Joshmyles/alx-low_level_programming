#include <unistd.h>

/**
 * _putchar - redefinition
 * @c: the input
 * Return: the write function
 */

void _putchar(char c)
{
write(1, &c, 1);
}

/**
 * print_number - the function
 * @n: the input
 * Return: a digit
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar ((n % 10) + '0');
}
