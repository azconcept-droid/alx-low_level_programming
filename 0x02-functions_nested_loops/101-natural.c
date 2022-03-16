#include <stdio.h>
/**
 * main - prints sum of multiples of 3 and 5
 *
 * Description: a program that computes
 * and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 * Return: 0 always
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
