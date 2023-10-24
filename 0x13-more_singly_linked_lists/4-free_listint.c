#include "lists.h"

/**
 * free_listint - function to free a list
 * @head: pointer to the head of list
 */
void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
