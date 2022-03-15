#include "main.h"
/**
 * print_alphabet - prints alphabets
 * @i: ascii variable
 *
 * Description: prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: (void)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar(10);
}
