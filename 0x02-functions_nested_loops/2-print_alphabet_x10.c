#include <unistd.h>

/*comment*/void print_alphabet_x10(void)/*comment*/
{
char letter = 'a';
int count = 0;
while (count < 10)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
count++;
letter = 'a'; /*Reset letter to 'a' for the next iteration*/
}
}

