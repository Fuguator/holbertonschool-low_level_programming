#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * buf_crt - creates buffer
 * @f: file
 * Return: address of buf
 */
char *buf_crt(char *a)
{
  char *buf;

  buf = malloc(sizeof(char) * 1024);

  if (!buf)
    dprintf(STDERR_FILENO,
      "Error: Can't write to %s\n", a), exit(99);

  return (buf);
}

void Fclose(int fd)
{
  int c;

  c = close(fd);

  if (c == -1)
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
}

int main(int argc, char **argv)
{
  int file_from, file_to, r, w;
  char *buf;

  if (argc != 3)
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

  buf = buf_crt(argv[2]);
  file_from = open(argv[1], O_RDONLY);
  r = read(file_from, buf, 1024);
  file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

  while (1)
  {
    r = read(file_from, buf, 1024);
    if (r == -1)
      dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),free(buf), exit(98);
    if (r > 0)
    {
      w = write(file_to, buf, r);
      if (w != r || w == -1)
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),free(buf), exit(99);
    }
  }

  free(buf);
  Fclose(file_from);
  Fclose(file_to);

  return (0);
}
