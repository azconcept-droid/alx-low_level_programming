#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
