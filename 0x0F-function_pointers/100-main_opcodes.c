#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function
 * @argc: input
 * @argv: input
 * Return: number
 */

int main(int argc, char *argv[])
{
int num_bytes, i;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
unsigned char *address = (unsigned char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", address[i]);
}
printf("\n");
return (0);
}
