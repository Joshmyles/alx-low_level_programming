#include <string.h>
#include "main.h"

/**
 * puts_half - the function
 * @str: the input
 * Return: the output
 */

void puts_half(char *str)
{
int length = 0;
int i;
while (str[length] != '\0')
{
length++;
}
int start = length / 2;
if (length % 2 != 0)
{
start = (length - 1) / 2;
}
for (i = start; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
