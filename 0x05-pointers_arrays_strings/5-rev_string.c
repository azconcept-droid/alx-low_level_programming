#include "main.h"
/**
 * rev_string - reverses an array
 * @s: array to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = (len - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
