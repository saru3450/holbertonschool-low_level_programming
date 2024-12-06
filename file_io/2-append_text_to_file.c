#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file create
 * @text_content: the content to be appenend
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int text_file, content;
	int i = 0;

	if (filename == NULL)
		return (-1);

	text_file = open(filename, O_WRONLY | O_APPEND);

	if (text_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		content = write(text_file, text_content, i);

		if (content == -1)
			return (-1);
	}
	close(text_file);
	return (1);
}
