#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: pointer to newly concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, s1_len = 0, s2_len = 0;

	if (s1 != NULL)
		while (s1[s1_len])
			s1_len++;
	if (s2 != NULL)
		while (s2[s2_len])
			s2_len++;
	if (n >= s2_len)
		s =  malloc((s1_len + s2_len + 1) * sizeof(char));
	else
		s = malloc((s1_len + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < s1_len)
	{
		s[i] = s1[i];
		i++;
	}
	if (n >= s2_len)
	{
		while (j < s2_len)
		{
			s[i] = s2[j];
			j++;
			i++;
		}
	}
	else 
	{
		while (j < n)
		{
			s[i] = s2[j];
			j++;
			i++;
		}
	}
	s[i] = '\0';
	return (s);
}
