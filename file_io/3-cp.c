#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * open_src_file - func
 * @filename: var
 * Return: Always 0.
 */
int open_src_file(const char *filename)
{
	int file = open(filename, O_RDONLY);

	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (file);
}
/**
 * create_dest_file - create or open dest file
 * @filename: var
 * Return: Always 0.
 */
int create_dest_file(const char *filename)
{
	int new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (new_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (new_file);
}
/**
 * copy_file - copy file content and write to dest
 * @src_file: var
 * @dest_file: var
 * @src_f: name of source file
 * @dest_f: name of destination file
 * Return: Always 0.
 */
void copy_file(int src_file, int dest_file, char *src_f, char *dest_f)
{
	char text[1024];
	int bytesR, wr;

	while (1)
	{
		bytesR = read(src_file, text, sizeof(text));
		if (bytesR > 0)
		{
			wr = write(dest_file, text, bytesR);
			if (wr == -1)
			{
				close(src_file);
				close(dest_file);
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_f);
				exit(99);
			}
		}
		else if (bytesR == 0)
		{
			break;
		}
		else
		{
			close(src_file);
			close(dest_file);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_f);
			exit(98);
		}
	}
}
/**
 * close_files - close the files
 * @src_file: var
 * @dest_file: var
 * Return: Always 0.
 */
void close_files(int src_file, int dest_file)
{
	if (close(src_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}
	else if (close(dest_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file);
		exit(100);
	}
}
/**
 * main - check the code
 * @argc: var
 * @argv: var
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_file, dest_file;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src_file = open_src_file(argv[1]);
	dest_file = create_dest_file(argv[2]);
	copy_file(src_file, dest_file, argv[1], argv[2]);
	close_files(src_file, dest_file);

	return (0);
}
