#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_opcodes - the function
 * @num_bytes: input
 */
void print_opcodes(int num_bytes)
{
int i;
char *main_addr = (char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x ", main_addr[i] & 0xFF);
}
printf("\n");
}

/**
 * main - the function
 * @argc: input
 * @argv: input
 * Return: number
 */
int main(int argc, char *argv[])
{
int num_bytes;
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
print_opcodes(num_bytes);
return (0);
}
