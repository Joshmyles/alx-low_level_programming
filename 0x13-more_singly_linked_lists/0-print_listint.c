#include "lists.h"

/**
 * print_listint - function to print all elements of a listint_t list
 * @h: a pointer to the head of the list
 * Return: the number of the nodes
 */
size_t print_listint(const listint_t *h)
{
size_t node_count = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
node_count++;
}
return (node_count);
}
