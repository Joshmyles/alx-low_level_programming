#include "main.h"

/*comment*/int print_last_digit(int n)/*comment*/
{
int lastDigit = n % 10;
if (lastDigit < 0)
{
lastDigit = -lastDigit;
}
printf("%d\n", lastDigit);
return (lastDigit);
}
