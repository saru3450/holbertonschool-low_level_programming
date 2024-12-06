#include "main.h"

/**
 * create_file - create a new file
 * @filename : name of the file we want read
 * @text_content : content of the text
 *
 * Return: 1 or -1 (if fail)
 */

int create_file(const char *filename, char *text_content)
{
	int nd, contenu;
	int x = 0;

	if (filename == NULL)
		return (-1);

	nd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (nd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[x] != '\0')
			x++;

		contenu = write(nd, text_content, x);
		if (contenu == -1)
		{
			return (-1);
		}
	}
	close(nd);
	return (1);
}
