#include "main.h"
/**
 * flip_bits - locates no of bits to changee
 * @n: the number firstr
 * @m: the number secod
 * Return: tota no bit change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k;

	count = 0;

	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			count++;
	}
	return (count);
}
