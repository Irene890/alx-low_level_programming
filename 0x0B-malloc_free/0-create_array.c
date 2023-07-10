#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * Return: NULL if size = 0 else a pointer to the array, or NULL if it fails
 * @size: size of array
 * @c: Character
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
