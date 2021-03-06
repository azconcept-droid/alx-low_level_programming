#include "main.h"
/**
 * read_textfile - reads a text file
 * @filename: name of file
 * @letters: maximum number of chars
 *
 * Description: reads a text file and prints
 * it to the POSIX standard output.
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t l_read, l_write;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	l_read = read(fd, buffer, letters);
	if (l_read == -1)
		return (0);
	l_write = write(STDOUT_FILENO, buffer, l_read);
	if (l_write == -1)
		return (0);
	close(fd);
	free(buffer);
	return (l_write);
}
