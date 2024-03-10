#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: input
 * @argv: optional input
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
int i, cents, num_coins;
int coin_values[5] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
num_coins = 0;
for (i = 0; i < 5; i++)
{
num_coins += cents / coin_values[i];
cents %= coin_values[i];
}
printf("%d\n", num_coins);
return (0);
}
