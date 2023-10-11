#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as an argument
 * Return: Pointer to the function corresponding to the operator
 */
int (*get_op_func(char *s))(int, int)
{
struct op ops[] = {
{"+", op_add}, /* Addition operator */
{"-", op_sub}, /* Subtraction operator */
{"*", op_mul}, /* Multiplication operator */
{"/", op_div}, /* Division operator */
{"%", op_mod}, /* Modulus operator */
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].op)
{
if (*(ops[i].op) == *s && s[1] == '\0')
return (ops[i].f);
i++;
}
return (NULL);
}
