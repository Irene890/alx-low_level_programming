#include "main.h"

/**
 * _isalpha - displays alphabet characters
 * @c: character
 * Return: 1 if successful, 0 if not
 */

int _isalpha(int c)

{
	if (c > 97 && c <= 122)
		return (1);
	else  if (c > 65 && c <= 90)
		return (1);
	else
		return (0);
}

