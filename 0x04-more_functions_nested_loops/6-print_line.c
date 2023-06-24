#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * Return: 0 when successful
 * @n: number of charaters
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
		_putchar ('_');
		}
	}
	else if (n <= 0)
	{
		_putchar ('\n');
	}
	_putchar('\n');
}
