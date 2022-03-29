#include "main.h:set"
/**
 * _strchr -  locates a character in a string.
 * @s: string passing in
 * @c: the character
 *
 * Return: a pointer to the first
 * occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i, temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			temp = i;
			break;
		}
	}
	for (i = 0; s[i]; i++)
	{
		if (s[i] != c)
		{
			s = NULL;
			break;
		}
		else
		{
			while (s[temp] != '\0')
			{
				i = 0;
				s[i] = s[temp];
				temp++;
				i++;
			}
			s[i] = '\0';
			break;
		}
	}
	return (s);
}
