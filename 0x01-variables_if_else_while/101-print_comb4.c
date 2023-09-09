#include <stdio.h>

/*comment*/int main(void)/*comment*/
{
for (int i = 0; i <= 7; i++) // Loop through the first digit (0 to 7)
{
for (int j = i + 1; j <= 8; j++) // Loop through the second digit (i+1 to 8)
{
for (int k = j + 1; k <= 9; k++) // Loop through the third digit (j+1 to 9)
{
putchar(i + '0'); // Print the first digit as a character
putchar(j + '0'); // Print the second digit as a character
putchar(k + '0'); // Print the third digit as a character
if (i < 7) // Check if it's not the second-to-last combination (i < 7)
{
putchar(','); // Print a comma
putchar(' '); // Print a space
}
}
}
}
putchar('\n'); // Print a newline character
return (0);
}
