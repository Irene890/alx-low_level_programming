#include "main.h"

/**
 * print_most_numbers - outputs most numbers
 * Return: 0 when successful
 *
 */

void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 48 || c == 50)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
