#include <main.h>

/**
 * main - the function
 * Return: 0
 */

int main(void)
{
char str[] = "Hello, World!";
_putchar("Original string: %s\n", str);
string_toupper(str);
_putchar("Modified string: %s\n", str);
return (0);
}
