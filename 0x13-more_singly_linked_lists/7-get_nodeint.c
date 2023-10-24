#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * Return: The data (n) of the head node, 0 if empty.
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (*head == NULL)
return (0);

data = (*head)->n;
temp = *head;
*head = (*head)->next;

free(temp);
return (data);
}
