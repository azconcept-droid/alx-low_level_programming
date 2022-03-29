#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to destination
 * @src:pointer to source
 * @n: amount of memory copied
 *
 * Description:function copies n bytes from
 * memory area src to memory area dest
 * Returns: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
