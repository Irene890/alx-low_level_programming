#include "main.h"

/**
 * clear_bit - puts bit to 0
 * @n: shows number to changee
 * @index: bit index to leear clear
 * Return: 1 success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
