#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Sum of parameters
 * @n: number of paramters passed
 * @...: variable number of paramters to sum of
 * Return: n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
