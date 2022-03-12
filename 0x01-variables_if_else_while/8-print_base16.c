#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print alphabets in lower case
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 97; i < 103; i++)
		putchar(i);
	putchar(10);
	return (0);
}
