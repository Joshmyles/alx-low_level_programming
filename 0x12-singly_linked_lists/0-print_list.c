#include <stdio.h>
#include "lists.h"

/**
 * print_list - the function
 * @h: pointer to the header of the linked list
 * Return: count number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count;
count = 0;
while (h != NULL)
{
if (h->str == NULL)
_putchar("[0] (nil)\n");
else
_putchar("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
