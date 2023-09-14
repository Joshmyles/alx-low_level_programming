#include "main.h"

/**
 * _isupper - checks if char is  uppercase
 * @c: is the char to be checked
 * Return: 1 if c is uppercase and 0 if lowercase
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
