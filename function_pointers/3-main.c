#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>

/**
 * main -  performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: results of calc function execution
 */
int main(int argc, char *argv[])
{
	char *oprt;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	oprt = (argv[2]);
	num2 = atoi(argv[3]);

	if (get_op_func(oprt) == NULL || oprt[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oprt == '/' && num2 == 0) || (*oprt == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oprt) (num1, num2));
	return (0);
}
