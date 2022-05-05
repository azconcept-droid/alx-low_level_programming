#include "main.h"
/**
 * check_fd_and_argv2 - check if file can be written into
 * @fd: file descriptor passed
 * @arg: argv passed
 *
 * Return: nothing.
 */
void check_fd_and_argv2(int fd, char *arg)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", arg);
		exit(99);
	}
	if (arg == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", arg);
		exit(99);
	}
}
/**
 * check_fd_and_argv1 - check if file is open
 * @fd: file descriptor passed
 * @arg: argv passed
 *
 * Return: nothing
 */
void check_fd_and_argv1(int fd, char *arg)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
		exit(98);
	}
	if (arg == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
		exit(98);
	}
}
/**
 * check_close - check if file is close
 * @fd_close: return value of close
 * @fd: file descriptor
 *
 * Return: nothing.
 */
void check_close(int fd_close, int fd)
{
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file.
 * @argc: number of command line arguments
 * @argv: argument vectors
 *
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	int fd_from = 0, fd_to = 0, fdfr_close, fdto_close;
	int fdfr_read, fdto_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	check_fd_and_argv1(fd_from, argv[1]);	/*Check if argv[1] is not NULL*/

	fd_from = open(argv[1], O_RDONLY);

	check_fd_and_argv1(fd_from, argv[1]);	/*Check if fd_from is not -1*/

	check_fd_and_argv2(fd_to, argv[2]);	/*Check if argv[2] is not NULL*/

	fd_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	check_fd_and_argv2(fd_to, argv[2]);	/*Check if fd_to is not -1*/

	while ((fdfr_read = read(fd_from, buffer, 1024)))
	{
		check_fd_and_argv1(fdfr_read, argv[1]);
		fdto_write = write(fd_to, buffer, fdfr_read);
		check_fd_and_argv2(fdto_write, argv[2]);
	}
	fdto_close = close(fd_to);
	check_close(fdto_close, fd_to);
	fdfr_close = close(fd_from);
	check_close(fdfr_close, fd_from);
	return (0);
}
