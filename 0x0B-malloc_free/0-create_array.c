#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to pass in
 *
 * Description: creates an array of chars
 * and initializes it with a specific char.
 * Return: pointer to allocated memory
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (s == NULL || size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
