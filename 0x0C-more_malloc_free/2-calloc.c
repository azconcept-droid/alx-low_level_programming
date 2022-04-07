#include <stdlib.h>
/**
 * _calloc - allocate array of memory
 * @nmemb: number of elements in the array
 * @size: size of each elements
 *
 * Description: creates an array of memory
 * and initializes it to zero.
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb + 1))
	{
		mem[i] = 0;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
