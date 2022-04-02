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
	char *phaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		phaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (phaystack);
		haystack = phaystack + 1;
	}
	return (0);
}
