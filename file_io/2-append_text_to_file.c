#include "main.h"
/**
 * append_text_to_file - func
 * @filename: file
 * @text_content: text
 * Return: -1 if error, 1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fd, w;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	while (*(text_content + i))
		i++;

	w = write(fd, text_content, i);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
