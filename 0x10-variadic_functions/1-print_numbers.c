#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - the function
 * @separator: input
 * @n: input
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int num;
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
