#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: 0 when successful.
 */

void more_numbers(void)
{
	int c;

	int j = 0;

	{
		while (j < 10)
		{
			for (c = 0; c <= 14; c++)
			{
				if (c > 9)
				{
					_putchar (c / 10 + '0');
				}
				_putchar(c % 10 + '0');
			}
			j++;
			_putchar('\n');
		}
	}
}
