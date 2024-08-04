#include "main.h"
/**
 * open_file_from - opens file
 * @filename: name
 * Return: file
 */
int open_file_from(const char *filename)
{
	int file = open(filename, O_RDONLY);

	if (file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (file);
}
/**
 * create_file_to - crates file
 * @filename: name
 * Return: file
 */
int create_file_to(const char *filename)
{
	int file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (file);
}
/**
 * cp_file - copies file from src to dest
 * @file_from: name
 * @file_to: name
 * @src: source file
 * @dest: destination file
 */
void cp_file(int file_from, int file_to, char *src, char *dest)
{
	char *buffer = malloc(sizeof(char) * 1024);
	int r, w, truee = 1;

	while (r = read(file_from, buffer, sizeof(buffer)) > 0)
	{
		w = write(file_to, buffer, r);
		if (w != r)
		{
			close(file_from);
			close(file_to);
			dprintf(2, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (r == -1)
	{
		close(file_from), close(file_to);
		dprintf(2, "Error: Can't read from file %s\n", src);
		exit(98);
	}

}
/**
 * close_files - closes files
 * STDERR_FILENO were replaced to 2
 * @file_from: name
 * @file_to: name
 */
void close_files(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int argc, char **argv)
{
	int file_from = open_file_from(argv[1]), file_to = create_file_to(argv[2]);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_file(file_from, file_to, argv[1], argv[2]);
	close_files(file_from, file_to);
	return (0);
}
