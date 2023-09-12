#include "main.h"

/*comment*/int print_last_digit(int n)/*comment*/
{
int lastDigit = num % 10;
if (lastDigit < 0)
{
lastDigit = -lastDigit;
}
putchar(lastDigit + '0');
putchar('\n');
return (lastDigit);
}
