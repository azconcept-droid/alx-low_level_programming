#include "main.h"
/**
 * _strstr -  locates a substring.
 * @haystack: string to search i:n
 * @needle: substring to look for
 *
 * Description: function finds the first
 * occurrence of the substring needle in
 * the string haystack. The terminating null
 * bytes (\0) are not compared
 *
 * Return: a pointer to the beginning of
 * the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
