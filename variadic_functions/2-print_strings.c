#include "variadic_functions.h"

/**
 * print_strings - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list first;
	char *spt;

	va_start(first, n);

	for (i = 0; i < n; i++)
	{
		spt = va_arg(first, char *);

		if (spt == NULL)
			printf("(nil)");
		else
			printf("%s", spt);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(first);
}
