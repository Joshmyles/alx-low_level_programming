#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: numbers on a new line
 */

void print_numbers(void)
{
int i;
for (i = '0'; i < '10'; i++)
{
_putchar(i);
}
_putchar('\n');
}
