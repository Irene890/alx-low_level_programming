#include "main.h"

/**
 * swap_int  - swaps a and b
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;

	*a = *b;

	*b = m;

}
