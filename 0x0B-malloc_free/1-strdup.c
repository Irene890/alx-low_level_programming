#include "main.h"
#include <stdlib.h>

/**
 * _strdup - dispalys a pointer to a newly allocated space in memory
 * @str:character
 * Return: Null
 */

char *_strdup(char *str)
{
	char *b;
	int i, k = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	b = malloc(sizeof(char) * (i + 1));

	if (b == NULL)
		return (NULL);
	for (k = 0; str[k]; k++)
		b[k] = str[k];
	return (b);
}
