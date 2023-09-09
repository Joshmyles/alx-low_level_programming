#include <stdio.h>

/*comment*/int main(void)/*comment*/
{
char hexDigits[] = "0123456789abcdef"; /*Array of hexadecimal digits*/
for (int i = 0; i < 16; i++) /*Loop through the hexadecimal digits*/
{
putchar(hexDigits[i]); /*Print the current digit*/
}
putchar('\n'); /*Print a newline character*/
return (0);
}
