#include "main.h"
/**
 * create_file - func
 * @filename: filename
 * @text_content: content
 * Return: -1 if error, 1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, fd, w;

	if (!filename)
		return (-1);

	fd = open(filename, 0_CREAT | 0_RDWR | 0_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	else
		while (text_content)
			i++;

	w = write(fd, text_content, i);

	if (w != i || w == -1)
		return (-1);

	close(fd);
	return (1);
}
