#include "main.h"

/**
 * _print_rev_recursion - the function
 * @s: the input
 * @Return: the function recursive
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
