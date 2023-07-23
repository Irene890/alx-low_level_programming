#include "main.h"
/**
 * print_triangle - displays triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, j;

		for (k = 1; k <= size; k++)
		{
			for (j = k; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= k; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

