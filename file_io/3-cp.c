#include "main.h"
/**
 */

int main(int argc, char **argv)
{
    int file_from, file_to, r, w;
    char buf[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(file_from);
        exit(99);
    }

    while ((r = read(file_from, buf, sizeof(buf))) > 0)
    {
        w = write(file_to, buf, r);
        if (w == -1 || w != r)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(file_from);
            close(file_to);
            exit(99);
        }
    }
    if (r == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(file_from);
        close(file_to);
        exit(98);
    }
    if (close(file_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        close(file_to);
        exit(100);
    }
    if (close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }

    return 0;
}

