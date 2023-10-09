#include <stdlib.h>

/**
 * is_digit - the function
 * @str: the input
 * Return: 1
 */

int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
 * multiply - the function
 * @num1: input
 * @num2: input
 * Return: result
 */

int multiply(char *num1, char *num2)
{
int result;
result = atoi(num1) * atoi(num2);
return (result);
}

/**
 * main - function
 * @argc: input
 * @argv: pointer array
 * Return: varying
 */

int main(int argc, char *argv[])
{
int result;
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}
result = multiply(argv[1], argv[2]);
printf("%d\n", result);
return (0);
}
