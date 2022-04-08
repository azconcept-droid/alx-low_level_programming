#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _isdigit(int c);
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
			if (!_isdigit(argv[i][j]))
			{
				printf("Error");
				_putchar('\n');
				exit(98);
			}
		}
	}
		printf("%d\n", (argv[1] * argv[2]));
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
/**
 * _isdigit - checks for a digit.
 * @c: input.
 *
 * Return: 1 if c is a digit
 * 0 otherwise.
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
