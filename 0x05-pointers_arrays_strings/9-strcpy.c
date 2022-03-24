#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @src: pointer to string to be copied
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
	int MAX;

	MAX = 0;
	while (src[MAX] != '\0')
	{
		MAX++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[MAX + 1] = '\0';

	return (dest);
}
