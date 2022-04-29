#include "main.h"
/**
 * get_bit - Finds the bit at a particular index
 * @n: decimal number passed in
 * @index: index of bit passed in starting from 0.
 *
 * Return: the bit at the given index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	n = n >> index;
	return (n & 1);
}
