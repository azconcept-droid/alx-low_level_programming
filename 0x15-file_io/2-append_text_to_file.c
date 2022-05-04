#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to append
 * @text_content: text to add
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, l_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != 0)	/*@i: Lenght of text_content*/
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
