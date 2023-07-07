#include "main.h"

/**
 * _isupper - prints our uppercase letters
 * Return: 1 if uppercase, else 0
 * @c: is a letter
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
