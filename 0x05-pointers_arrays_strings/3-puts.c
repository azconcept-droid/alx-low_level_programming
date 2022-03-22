#include "main.h"
/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}
