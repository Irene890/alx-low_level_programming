#include "main.h"

/**
 * set_bit - puts the bit index
 * @n: shows the no to convetr
 * @index: value index to change to 1
 * Return: 1 success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
