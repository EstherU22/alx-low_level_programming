#include "main.h"

/**
 * binary_to_unit - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_unit(const char *b)
{

	int len = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (sum);
		sum = 2 * sum + (b[i] - '0');
	}

	return (sum);
}
