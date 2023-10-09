#include <stdlib.h>
#include <string.h>

/**
 * _calloc - the function
 * @nmemb: input
 * @size: input
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
size_t total_size;
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr != NULL)
{
memset(ptr, 0, total_size);
}
return (ptr);
}
