#include "main.h"
/**
 * read_textfile - func
 * @filename: name of file
 * @letters: len
 * Return: w
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *a;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	a = malloc(letters * sizeof(char));
	if (!a)
		return (0);

	r = read(fd, a, letters);
	w = write(STDOUT_FILENO, a, r);

	free(a);
	close(fd);
	return (w);
}
