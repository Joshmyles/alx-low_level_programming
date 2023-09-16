#include <stdio.h>

/**
 * main - main function
 * Return: a two pair combination
 */

int main(void)
{
int i, j;
for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
/*print first two digit numbers with 0 if necessary*/
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
/*Print the second two-digit number with leading zero if necessary*/
putchar(j / 10 + '0');
putchar(j % 10 + '0');
/*check if it is not 99*/
if (i < 99 || j < 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
