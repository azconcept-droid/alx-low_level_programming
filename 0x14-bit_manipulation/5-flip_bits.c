#include "main.h"
/**
 * flip_bits - flip bits and count the number of bits flipeed
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would
 * need to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	n = n ^ m;

	for (count = 0; n > 0; n >>= 1)
		if (n & 1)
			count++;
	return (count);
}
