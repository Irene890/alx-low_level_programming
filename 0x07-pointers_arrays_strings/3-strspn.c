#include "main.h"
/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: always 0 if success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				m++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
