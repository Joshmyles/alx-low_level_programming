#include "main.h"

/**
 * factorial - the function
 * @n: input
 * Return: the recursive
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
