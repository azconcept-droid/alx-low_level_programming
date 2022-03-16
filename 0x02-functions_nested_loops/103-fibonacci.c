#include <stdio.h>
/**
 * main - prints sum of evens in fibonacci
 *
 * Description: program that finds and prin:xt
 * the sum of the even-valued terms
 * in Fibonacci sequence whose values
 * do not exceed 4,000,000 followed by a new line.
 * Return: 0 always.
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0, tSum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			tSum = tSum + y;
		}
		sum = x + y;
		x = y;
		y = sum;

	}
	printf("%ld\n", tSum);
	return (0);
}
