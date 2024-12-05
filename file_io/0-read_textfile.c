#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file name
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ho;
	ssize_t hdo, hdr;
	char *hda;

	if (!filename)
		return (0);

	ho = open(filename, O_RDONLY);

	if (ho == -1)
		return (0);
	hda = malloc(sizeof(char) * letters);
	if (hda == NULL)
		return (0);

	hdo = read(ho, hda, letters);
	hdr = write(STDIN_FILENO, hda, hdo);

	close(ho);
	free(hda);

	return (hdr);
}
