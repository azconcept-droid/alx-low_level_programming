#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @s: holds memory address
 * @b: constant bytes
 * @n: n bytes of memory
 *
 * Description: function fills the first
 * n bytes of the memory area pointed to
 * by s with the constant byte b
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
