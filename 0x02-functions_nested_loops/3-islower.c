#include "main.h"
/**
 * _islower - looks for lower case
 * Return: 1 for lowercase characters
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
