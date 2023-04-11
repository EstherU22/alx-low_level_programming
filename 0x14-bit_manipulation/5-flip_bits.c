#include "main.h"

/**
 * flip_bits - determine how many bits to flip
 * to get from one num to another
 * @n: number
 * @m: number2
 *
 * Return: how many bits differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, diff_bits = 0;
	unsigned long int difference;
	unsigned long int exclusive = n ^ m;
	
	for (i = 63; i >= 0; i--)
	{
		differences = exclusive >> i;
		if (differences & 1)
			count++;
	}

	return (count);
}
