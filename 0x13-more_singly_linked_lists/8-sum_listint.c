#include "lists.h"

/**
 * sum_listint - function returns sum al (n) of a listint_t linked
 * @head: 1st node the linked
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
