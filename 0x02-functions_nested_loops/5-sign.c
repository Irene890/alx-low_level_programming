#include "main.h"
/**
 * print_sign - prints sign of a number
 * Return: 1 and + if n>0
 * 0 and 0 if n=0
 * -1 and - if n<0
 * @n: value displayed
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
_putchar('\n');
}
