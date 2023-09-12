#include "main.h"
#include <stdio.h>

/*comment*/int print_sign(int n)/*comment*/
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
/*comment*/int main(void)/*comment*/
{
int number = 42;
int result = print_sign(number);
printf("\nResult: %d\n", result);
return (0);
}
