#include "function_pointers.h"

/**
 * print_name - the function
 * @name: the input
 * @f: function <optional>
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
