#include <stdbool.h>
#include <string.h>
#include "main.h"

/**
 * is_palindrome - the function
 * @s: input
 * Return: output
 */

int is_palindrome(char *s)
{
int left = 0;
int right = strlen(s) - 1;
while (left < right)
{
if (s[left] != s[right])
{
return (0);
}
left++;
right--;
}
return (1);
}
