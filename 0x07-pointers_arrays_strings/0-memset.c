#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 * @s: beginning of meory address
 * @b: desied value
 * @n: number of bytes to be changed
 * Return: changes array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0;i++)
	{
		s[i] = b;
		n--;
	}
	return(s);
}
