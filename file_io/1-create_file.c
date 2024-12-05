#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: the content to be written into the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *p;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		p = text_content;
		while (*p != '\0')
		{
			if (write(fd, p, 1) != 1)
			{
				close(fd);
				return (-1);
			}
			p++;
		}
	}
	else
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
