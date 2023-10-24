#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at an index
 * @head: A pointer to a pointer to the head of the list
 * @index: The index of the node to be deleted starting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int i = 0;

if (*head == NULL)
return (-1);

temp = *head;

if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}

while (temp != NULL && i < index)
{
prev = temp;
temp = temp->next;
i++;
}

if (temp == NULL)
return (-1);

prev->next = temp->next;
free(temp);
return (1);
}
