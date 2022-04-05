#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space
 * where boths are concated
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, s1_len, s2_len;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len])
	{
		s1_len++;
	}
	while (s2[s2_len])
	{
		s2_len++;
	}
	s =  malloc((s1_len + s2_len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s[i] = s2[j];
		j++;
		i++;
	}
		s[i] = '\0';
		return (s);
	}
}
