#include <stdlib.h>

/**
 * malloc_checked - the function
 * @b: input
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
