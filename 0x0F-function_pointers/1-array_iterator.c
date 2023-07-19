#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - displays array element
 * @array: array
 * @size: elements to print
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
