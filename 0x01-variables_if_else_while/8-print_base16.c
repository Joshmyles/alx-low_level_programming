#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
int i;
char hexDigits[] = 16; 
hexDigits = ['0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'];
for (i = 0; i < hexDigits.length; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
