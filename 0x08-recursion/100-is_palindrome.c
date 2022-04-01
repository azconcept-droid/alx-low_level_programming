#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * isPalRec - helper function for is_palindrome
 * @str: input string
 * @start: start index
 * @end: end index
 * Return: 1 if true, 0 if false
 */
int isPalRec(char str[], int start, int end)
{
	if (start == end)
		return (1);
	if (str[start] != str[end])
		return (0);
	if (start < end + 1)
		return (isPalRec(str, start + 1, end - 1));
	return (1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input string
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (isPalRec(s, 0, len));
}
