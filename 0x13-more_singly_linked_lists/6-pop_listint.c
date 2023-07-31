#include "lists.h"

/**
 * pop_listint - function deletes head node of listint_t linked lists
 * and returns the head node’s data (n)
 * @head: address to the 1st element in linked list
 * Return: 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
