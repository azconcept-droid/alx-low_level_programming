#include <stdlib.h>
/**
 * _strdup - copy string
 * @str: string pass in
 *
 * Description: returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * Return: a pointer to a newly allocated space in memory.
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	s = malloc(sizeof(*s));
	if (s == NULL || str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
