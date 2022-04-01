#include "main.h"
/**
 * factorial - calculate factorial of a number
 * @n: the number
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
