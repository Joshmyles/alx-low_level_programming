#include <stdio.h>

/*comment*/int main(void)/*comment*/
{
for (int i = 0; i <= 9; i++) // Loop through the first digit (0 to 9)
{
for (int j = i + 1; j <= 9; j++) // Loop through the second digit (i+1 to 9)
{
putchar(i + '0'); // Print the first digit as a character
putchar(j + '0'); // Print the second digit as a character
if (i < 8) // Check if it's not the second-to-last digit (i < 8)
{
putchar(','); // Print a comma
putchar(' '); // Print a space
}
}
}
putchar('\n'); // Print a newline character
return (0);
}
