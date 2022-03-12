#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print lowercase alphabets
 * in reverse.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 98; i--)
		putchar(i);
	putchar(10);
	return (0);
}
