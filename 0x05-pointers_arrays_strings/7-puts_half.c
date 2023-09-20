#include <string.h>
#include "main.h"

/**
 * puts_half - the function
 * @str: the input
 * Return: the output
 */

void puts_half(char *str)
{
int length = strlen(str);
int start;
int i;
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2;
}
for (i = start; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
