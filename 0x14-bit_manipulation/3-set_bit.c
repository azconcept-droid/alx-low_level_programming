#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the address of the number
 * @index: starting from 0 of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	uli MAX_BIT;

	MAX_BIT = sizeof(uli) * 8;	/*Maximum bit 32 0r 64*/

	if (index > MAX_BIT)
		return (-1);

	*n = *n | (1 << index);	/*Change the bit to 1 and sum*/
	return (1);
}
