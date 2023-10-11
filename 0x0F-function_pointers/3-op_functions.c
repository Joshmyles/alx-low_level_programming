#include "3-calc.h"

/**
 * op_add - Add two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Subtract two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiply two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Divide two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of dividing a by b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Calculate the remainder of division of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The remainder of dividing a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
