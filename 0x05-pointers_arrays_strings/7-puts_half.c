#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be pass into the function
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int j;

	while (str[len] != '\0')
	{
		len++;
	}

	if ((len % 2) == 0)
	{
		for (j = (len / 2); str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = ((len - 1) / 2); str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}

	}
	_putchar('\n');
}
