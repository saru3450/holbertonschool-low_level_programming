#include "variadic_functions.h"
/**
 * print_all - that prints anything
 * @format: list of types of arguments passed to the function
 * @ 'c': char
 * @ 'i': integer
 * @ 'f': float
 * @ 's': char * (if the string is NULL, print (nil) instead
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list first;
	char *spr;
	unsigned int i = 0;
	unsigned int format_char_const = 0;

	va_start(first, format);

	while (format && format[i])
	{
		format_char_const = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(first, int));
				break;
			case 'i':
				printf("%d", va_arg(first, int));
				break;
			case 'f':
				printf("%f", va_arg(first, double));
				break;
			case 's':
				spr = va_arg(first, char *);
				printf("%s", !spr ? "(nil)" : spr);
				break;
			default:
				format_char_const = 0;
				break;
		}
		if (format[i + 1] && format_char_const)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(first);
}
