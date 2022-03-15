#include "main.h"
/**
 * _islower - lowercase finder
 * @c: argument
 *
 * Description:function that checks
 * for lowercase character.
 * Return: 1 (success) and 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
