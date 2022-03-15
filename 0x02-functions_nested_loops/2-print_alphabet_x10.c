#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x
 *
 * Description: prints the alphabet,
 * in lowercase 10 times,
 * followed by a new line.
 * Return: (void)
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
	for (i = 97; i < 123; i++)
		putchar(i);
	j++;
	putchar(10);
	}
}
