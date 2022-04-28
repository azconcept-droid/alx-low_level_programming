#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 and if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	unsigned int dec, weight;
	int len;

	dec = 0, weight = 1, len = 0;
	/*Get length of string*/
	while (b[len])
		len++;
	len--;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			dec += weight;	/*sum each decimal number*/
		len--;
		weight *= 2;	/*Weight of each bits*/
	}
	return (dec);
}
