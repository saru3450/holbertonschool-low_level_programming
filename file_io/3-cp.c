#include "main.h"
#include <stdio.h>
#define BUFF_SIZE 1024
/**
 * _cp - copy text from file to another file
 * @f_to: file to be written
 * @f_from: file to be read
 */

void _cp(char *f_from, char *f_to)
{
	int file_from = open(f_from, O_RDONLY);
	int file_to = open(f_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ssize_t text_copy, text_written;
	char buff[BUFF_SIZE];

	if (file_from == -1)

	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}
	while ((text_copy = read(file_from, buff, BUFF_SIZE)) > 0)
	{
		text_written = write(file_to, buff, text_copy);
		if (text_written != text_copy)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
			exit(99);
		}
	}
	if (text_copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
}
/**
 * main - call the function _cp
 * @argc: numbr of arguments
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_cp(argv[1], argv[2]);
return (0);
}
