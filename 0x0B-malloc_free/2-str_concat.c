#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, s1_len = 0, s2_len = 0;

	if (s1 != NULL)
		while (s1[s1_len])
			s1_len++;
	if (s2 != NULL)
		while (s2[s2_len])
			s2_len++;
	s =  malloc((s1_len + s2_len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < s1_len)
	{
		s[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
