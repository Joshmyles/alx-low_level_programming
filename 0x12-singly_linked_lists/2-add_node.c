#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the linked list
 * @str: string to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *str_copy;
unsigned int str_len = 0;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
if (str != NULL)
{
str_len = strlen(str);
str_copy = strdup(str);
if (str_copy == NULL)
{
free(new_node);
return (NULL);
}
}
else
{
str_copy = NULL;
}
new_node->str = str_copy;
new_node->len = str_len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
