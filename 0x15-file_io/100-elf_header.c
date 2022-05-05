#include "main.h"
#include <elf.h>
/**
 * main - displays the information contained in the ELF header
 * @argc: command line arguments
 * @argv: array holding the arguments
 *
 * Description: program that displays the information
 * contained in the ELF header at the start of an ELF file.
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	return (0);
}
