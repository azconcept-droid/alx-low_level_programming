#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints alphabets 
 * in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if(i != 101 || i != 113)
			putchar(i);
	}
	putchar(10);
	return (0);
}
