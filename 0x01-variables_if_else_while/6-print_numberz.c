#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints single digit
 * numbers of base 10 starting
 * from 0.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar(10);
	return (0);
}
