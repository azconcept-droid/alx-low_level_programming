#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: address of the number
 * @index: bit index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	uli MAX_BIT;

	MAX_BIT = sizeof(uli) * 8;	/*Maximum bit 32 or 64*/

	if (index > MAX_BIT)
		return (-1);
	*n = *n & (*n ^ (1 << index));
	return (1);
}
