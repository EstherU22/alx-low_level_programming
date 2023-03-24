#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0, i;

	/*validate valist and initialise */
	if (n == 0)
		return (0);
	va_start(valist, n);

	/*iterate through list, update sum, free list */
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);

	return (sum);
}
