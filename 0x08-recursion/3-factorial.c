#include "main.h"

/**
 * int factorial - returns the factorial number
 * @n: factorial
 * Return: Factorial n
 */

int factorial(int n);
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
