#include "main.h"
 /**
  * print_numbers - function that prints the numbers, from 0 to 9
  * Return: numbers 0-9
  * @c: characters
  */

void print_numbers(void)
{
	char c;
	for (c = 48; c <= 57 ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
