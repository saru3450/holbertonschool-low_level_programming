#include "variadic_functions.h"

/**
 *  sum_them_all - the sum of all its parameters
 *  @n: number of the sum
 *  Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list first;

	va_start(first, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(first, const unsigned int);
		}
	}
	va_end(first);
	return (sum);
}
