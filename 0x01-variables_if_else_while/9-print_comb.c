#include <stdio.h>

/*comment*/int main(void)/*comment*/
{
for (int i = 0; i < 10; i++) // Loop through the single-digit numbers
{
putchar(i + '0'); // Print the current digit as a character
if (i < 9) // Check if it's not the last digit
{
putchar(','); // Print a comma
putchar(' '); // Print a space
}
}
putchar('\n'); // Print a newline character
return (0);
}
