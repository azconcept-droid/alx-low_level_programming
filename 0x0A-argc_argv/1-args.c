#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of arguments
 * @argc: number of command line args
 * @argv: name of arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
