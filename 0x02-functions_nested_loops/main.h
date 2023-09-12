#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/*comment*/void print_alphabet(void)/*comment*/
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
#endif /* MAIN_H */
