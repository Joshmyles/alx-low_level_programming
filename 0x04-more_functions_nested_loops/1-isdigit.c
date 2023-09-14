#include "main.h"

/**
 * _isdigit - is a program that checks for values btwn 0 and 9 inclusive
 * @c: is the digit passed to the function
 * Return: 1 when true else 0
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
