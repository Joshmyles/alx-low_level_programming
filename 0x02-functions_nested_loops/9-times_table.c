#include "main.h"

/*comment*/void times_table(void)/*comment*/
{
int result;
for (int i = 0; i <= 9; i++)
{
for (int j = 0; j <= 9; j++)
{
result = i * j;
if (j != 0)
{
putchar(',');
putchar(' ');
}
if (result < 10)
{
putchar(' ');
}
putchar(result / 10 + '0');
putchar(result % 10 + '0');
}putchar('\n');
}
}
