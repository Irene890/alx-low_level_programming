#include "main.h"

/**
 * _strncat - joins/combines strings together
 * Return: Always 0
 * @dest: destination string
 * @src: source string
 * @n: nth character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')

	{
		i++;
	}
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
