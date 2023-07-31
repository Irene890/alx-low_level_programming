#include "lists.h"

/**
 * listint_len - this function displays no of elements in a linked lists
 * @h: type of linked list in listint_t to traverse
 * function returns the number of elements in a linked listint_t list
 * Return: total no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
