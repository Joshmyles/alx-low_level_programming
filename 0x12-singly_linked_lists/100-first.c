#include <stdio.h>
#include <string.h>

/**
 * myStartupFunction - the function
 */
void myStartupFunction(void) __attribute__((constructor));

/**
 * myStartupFunction - the function
 */
void myStartupFunction(void)
{
string i;
i = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
printf(i);
}

/**
 * main - the function
 * Return: 0
 */
int main(void)
{
printf("Main function is executed.\n");
return (0);
}
