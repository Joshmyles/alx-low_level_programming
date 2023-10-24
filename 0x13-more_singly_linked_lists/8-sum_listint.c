#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) in a list
 * @head: A pointer to the head of the list
 * Return: The sum of all data (n), or 0 list empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
