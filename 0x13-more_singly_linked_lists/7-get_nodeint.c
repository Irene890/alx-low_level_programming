#include "lists.h"

/**
 * get_nodeint_at_index - function returns  nth node of listint_t linked
 * @head: 1st node of linked list
 * @index: index of node to return
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
