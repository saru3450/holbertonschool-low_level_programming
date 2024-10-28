#include "main.h"

/**
* print_square - print square
* @size: size x size
*/

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
	}
	_putchar('\n');
	y++;
	}
}
