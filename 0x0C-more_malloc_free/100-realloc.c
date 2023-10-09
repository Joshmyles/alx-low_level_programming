#include <stdlib.h>
#include <string.h>

/**
 * _realloc - the function
 * @ptr: pointer
 * @old_size: input
 * @new_size: input
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
size_t min_size;
void *new_ptr;
if (ptr == NULL)
{
return (malloc(new_size));
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
{
return (ptr);
}
else
{
new_ptr = malloc(new_size);
if (new_ptr != NULL)
{
min_size = (old_size < new_size) ? old_size : new_size;
memcpy(new_ptr, ptr, min_size);
free(ptr);
return (new_ptr);
}
else
{
return (NULL);
}
}
}
