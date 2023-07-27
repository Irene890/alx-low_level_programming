#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - includes new node at the start of linked list
 * @head: double pointr to list_t list
 * @str: new string to include the node
 * Return: addr of new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
