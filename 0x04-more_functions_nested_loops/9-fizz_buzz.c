#include <stdio.h>

/**
 * fizz_buzz - the interview question
 * Return: the multiples of 15
 */

int fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15)
{
printf('FizzBuzz');
}
else if (i % 5)
{
printf('Buzz');
}
else if (i % 3)
{
printf('Fizz');
}
else
{
printf('%d', i);
}
}
}
