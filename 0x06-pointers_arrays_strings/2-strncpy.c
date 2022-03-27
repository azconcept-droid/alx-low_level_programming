#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest : destination string
 * @src : source string
 * @n : most n bytes from src
 *
 * Description: function copies the src string
 * to the dest string function and null-terminated
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
