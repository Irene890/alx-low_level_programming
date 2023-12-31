#include <stdio.h>
#include "lists.h"

/**
 * print_list - displays the elements of a linked lst
 * @h: pointer to list_t list to display
 * Return: no of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}
	return (k);
}
