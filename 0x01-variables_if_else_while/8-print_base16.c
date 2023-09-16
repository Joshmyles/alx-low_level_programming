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
hexDigits[10] = '10';
hexDigits[11] = '11';
hexDigits[12] = '12';
hexDigits[13] = '13';
hexDigits[14] = '14';
hexDigits[15] = '15';

for (i = 0; i < 16; i++)
{
putchar(hexDigits[i]);
}
putchar('\n');
return (0);
}
