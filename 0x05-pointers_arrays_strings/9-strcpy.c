#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @src: string to be copied
 * @dest: destination to copy to
 *
 * Description: copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= (len + 1); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
