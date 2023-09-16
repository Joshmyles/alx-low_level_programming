#include <stdio.h>

/**
 * main - main function
 * Return: a combination
 */

int main(void)
{
for (int i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
