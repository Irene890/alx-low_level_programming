#include "main.h"

/**
 * _isdigit - checks for digits and
 * Return: 1 if digit, else 0
 * @c: digit or letter
 */

int _isdigit(int c)
{
	if (c == 48 || c <= 57)
		return (1);
	else
		return (0);
}
