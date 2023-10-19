#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the linked list
 * @str: string to be duplicated and added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
char *new_str;
size_t len = 0;
if (str)
len = strlen(str);
new_node = malloc(sizeof(list_t));
new_str = strdup(str);
if (new_node && new_str)
{
new_node->str = new_str;
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
}
return (new_node);
}
free(new_node);
free(new_str);
return (NULL);
}
