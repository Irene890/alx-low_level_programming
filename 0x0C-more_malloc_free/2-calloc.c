#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant
 * @s: memory area to fill
 * @b: character to copy
 * @n: no of times to copy
 * Return: ptr to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * *_calloc - sets memory for an array
 * @nmemb: no of elements in array
 * @size: size of every element
 * Return: pr to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pr = malloc(size * nmemb);
	if (pr == NULL)
		return (NULL);
	_memset(pr, 0, nmemb * size);
	return (pr);
}
