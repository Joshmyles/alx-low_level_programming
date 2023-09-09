#include <stdio.h>

/*comment*/int main(void)/*comment*/
{
for (int i = 0; i <= 99; i++) // Loop through the first two-digit number (0 to 99)
{
for (int j = i; j <= 99; j++) // Loop through the second two-digit number (i to 99)
{
// Print the first two-digit number with leading zero if necessary
putchar(i / 10 + '0');
putchar(i % 10 + '0');
// Print a space
putchar(' ');       
// Print the second two-digit number with leading zero if necessary
putchar(j / 10 + '0');
putchar(j % 10 + '0');     
if (i < 99 || j < 99) // Check if it's not the last combination (i < 99 or j < 99)
{
putchar(','); // Print a comma
putchar(' '); // Print a space
}
}
}
putchar('\n'); // Print a newline character
return (0);
}
