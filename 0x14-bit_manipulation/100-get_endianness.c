#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int e;
	char *c;
	int int_c;

	e = 1;
	c = (char *) &e;
	int_c = (int)*c;

	return (int_c);
}
