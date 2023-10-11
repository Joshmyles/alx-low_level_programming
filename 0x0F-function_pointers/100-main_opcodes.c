#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_main_opcodes - the function
 * @num_bytes: input
 * Return: nothin
 */
void print_main_opcodes(int num_bytes)
{
int i;
char *main_addr = (char *)print_main_opcodes;
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < num_bytes; i++)
{
printf("%02x ", (unsigned char)main_addr[i]);
}
printf("\n");
}

/**
 * main - main function
 * @argc: input
 * @argv: input
 * Return: nothing
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
print_main_opcodes(num_bytes);
return (0);
}
