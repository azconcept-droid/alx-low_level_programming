#include "main.h"
/**
 * puts2 - prints every other character
 * @str: string to be printed
 *
 * Description: prints every other character
 * except odd numbers
 * Return: nothing
 */
void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if ((j % 2) != 0)
			continue;
		_putchar(str[j]);
	}
	_putchar('\n');
}
