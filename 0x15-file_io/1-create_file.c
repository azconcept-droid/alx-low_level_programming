#include "main.h"
/**
 * create_file - creates a file and write to it
 * @filename: file to write to
 * @text_content: text to read
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t l_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != '\0')	/*Calculate length of text_content*/
		i++;
	l_write = write(fd, text_content, i);
	if (l_write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
