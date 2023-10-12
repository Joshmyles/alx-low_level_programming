#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - the function
 * @format: input
 * Return: something
 */
void print_all(const char * const format, ...)
{
const char *format_iterator;
char c, *str;
va_list args;
va_start(args, format);
format_iterator = format;
while (format_iterator && format_iterator[0])
{
c = format_iterator[0];
switch (c)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
break;
default:
break;
}
format_iterator++;
if (format_iterator[0])
{
printf(", ");
}
}
printf("\n");
va_end(args);
}
