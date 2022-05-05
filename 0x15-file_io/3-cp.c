#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of command line arguments
 * #argv: argument vectors
 *
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, fdfr_close, fdto_close;
	ssize_t fdfr_read, fdto_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (argv[2] == NULL)
	{
		fdfr_close = close(fd_from);
		if (fdfr_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	fd_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC | O_EXCL, 0664);
	if (fd_to == -1)
	{
		fdfr_close = close(fd_from);
		if (fdfr_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	fdfr_read = read(fd_from, buffer, 1024);
	if (fdfr_read == -1)
	{
		fdto_close = close(fd_to), fdfr_close = close(fd_from);
		if (fdto_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
			exit(100);
		}
		if (fdfr_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdto_write = write(fd_to, buffer, fdfr_read);
	if (fdto_write == -1)
	{
		fdto_close = close(fd_to), fdfr_close = close(fd_from);
		if (fdto_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
			exit(100);
		}
		if (fdfr_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	fdto_close = close(fd_to), fdfr_close = close(fd_from);
	if (fdto_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	if (fdfr_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
