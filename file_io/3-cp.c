#include "main.h"

int main (int argc, char **argv)
{
  int file_from, file_to, r, w;
  char buf[1024];

  if (argc != 3)
  {
    dprintf(2, "Usage: cp file_from file_to\n");
    exit(97);
  }

  file_from = open(argv[1], O_RDONLY);
  if (file_from == -1)
  {
    dprintf(2, "Error: Can't read from file %s\n", argv[1]);
    exit(98);
  }

  file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
  if (file_to == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
    exit(99);
  }

  while(1)
    {
      r = read(file_from, buf, 1024);
      if (r == -1)
      {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
      }
      if (r > 0)
      {
        w = write(file_to, buf, r);
        if (w == -1 || w != r)
        {
          dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
          exit(99);
        }
      }

    }

  close(file_from);
  close(file_to);

  if (close(file_from) == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
    exit(100);
  } 
  if (close(file_to) == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
    exit(100);
  }
