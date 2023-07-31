#include "lists.h"

/**
 * add_nodeint - funct adds new node at start of a listint_t list
 * @head: pointer to the 1st node in list
 * @n: data to include in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
