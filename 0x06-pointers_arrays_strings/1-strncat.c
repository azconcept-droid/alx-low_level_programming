#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest : destination string
 * @src : source string
 * @n : at most n bytes from source
 *
 * Description: This function appends the src string
 * to the dest string it uses at most n bytes from src
 * and src is not null-terminated if it contains n or more bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
			break;
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
