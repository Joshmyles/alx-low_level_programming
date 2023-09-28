#include "main.h"

/**
 * _sqrt_recursion - the function
 * @n: input
 * @m: guess part
 * Return: the output
 */

int _sqrt_recursion(int n, int m)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else if (m * m == n)
{
return (m);
}
else if (m * m > n)
{
return (-1);
}
else
{
return (_sqrt_recursion(n, m + 1));
}
}
