#include <stdarg.h>
/**
 * sum_them_all - find sum of all its parameters.
 * @n: count number of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int);
	va_end(ap);

	return (sum);
}
