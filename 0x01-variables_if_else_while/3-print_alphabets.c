#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints the alphabet
 * in lowercase and then in
 * uppercase.
 * Return: 0
 */
int main()
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 111; i++)
		putchar(i);
	putchar(10);
	return (0);
}
