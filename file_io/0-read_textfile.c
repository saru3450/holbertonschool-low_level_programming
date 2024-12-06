#include "main.h"

/**
 * read_textfile - read a file and print on POSIX
 * @filename : name of the file we want read
 * @letters : we want to print
 *
 * Return: letters print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	size_t n;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	buf = malloc(letters + 1);

	if (buf == NULL)
		return (0);

	n = read(file, buf, letters);

	write(STDOUT_FILENO, buf, n);
	close(file);
	return (n);
}
