#include "lists.h"

/**
 * print_listint - display a list of linked
 * @h: print type listint_t
 * function that prints all the elements of a listint_t list
 * Return: Total node number
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

