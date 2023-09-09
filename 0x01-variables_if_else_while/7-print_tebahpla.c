#include <stdio.h>

/*comment*/int main(void)/*comment*/
{
char letter = 'z';
/* Start with 'z', which is the last lowercase letter*/
while (letter >= 'a')
/* Loop from 'z' down to 'a'*/
{
putchar(letter);
/* Print the current letter*/
letter--;
/* Move to the previous letter*/
}
putchar('\n');
/* Print a newline character*/
return (0);
}
