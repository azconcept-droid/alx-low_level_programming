#include "main.h"
/**
 * print_binary - print decimal in binary
 * @n: number to be printed
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_dup;

	n_dup = n;

	if (n >= 2)
	{
		print_binary(n >> 1);
		_putchar((n_dup & 1) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
