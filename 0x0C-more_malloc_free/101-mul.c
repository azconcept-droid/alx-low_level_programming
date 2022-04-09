#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
/**
 * main - multiply two arguments pass to it
 * @argc: number of arguments
 * @argv: arguments value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error");
				_putchar('\n');
				exit(98);
			}
		}
	}
		printf("%lu\n", atol(argv[1]) * atol(argv[2]));
	}
	else
	{
		printf("Error");
		_putchar('\n');
		exit(98);
	}
	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
