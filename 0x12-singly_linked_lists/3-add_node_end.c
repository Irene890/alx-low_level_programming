#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - includes new node at the end of linked
 * @head: double pointr to list_t
 * @str: string to put in the new node
 * Return: addrr of new element, or NULL if it fais
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
