#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - add all postif number
 * @argc : the size of argv
 * @argv : the argument with program
 *
 * Return: 0;
 */


int main(int argc, char *argv[])
{
	int i;
	int n;
	int add = 0;
	int result = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{

		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (argv[i][n] >= '0' && argv[i][n] <= '9')
				add = add * 10 + argv[i][n] - '0';
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		result += add;
		add = 0;
	}
	printf("%d\n", result);
	return (0);
}
