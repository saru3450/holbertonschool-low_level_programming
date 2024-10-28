#include "main.h"
/**
* print_triangle - triangle
* @size: size of the triangle
*/
void print_triangle(int size)
{
	int diese, space, i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (space = size - i; space > 0 ; space--)
				_putchar(' ');
			for (diese = 0; diese <	i; diese++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
