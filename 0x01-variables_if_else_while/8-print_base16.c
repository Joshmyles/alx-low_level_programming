#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
int i;
char hexDigits[16];
hexDigits[0] = '0';
hexDigits[1] = '1';
hexDigits[2] = '2';
hexDigits[3] = '3';
hexDigits[4] = '4';
hexDigits[5] = '5';
hexDigits[6] = '6';
hexDigits[7] = '7';
hexDigits[8] = '8';
hexDigits[9] = '9';
hexDigits[10] = 'a';
hexDigits[11] = 'b';
hexDigits[12] = 'c';
hexDigits[13] = 'd';
hexDigits[14] = 'e';
hexDigits[15] = 'f';

for (i = 0; i < 16; i++)
{
putchar(hexDigits[i]);
}
putchar('\n');
return (0);
}
