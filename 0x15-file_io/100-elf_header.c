#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <elf.h>
#include <fcntl.h>
/**
 * main - function print header elf
 * @ac: args number
 * @av: args list
 * Return: 0
 */
int main(int ac, char *av[])
{
	int file, rd;
	char str[2];

	if (ac != 2)
	{
		write(STDERR_FILENO, "ERROR", 5);
		exit(98);
	}
	file = open(av[1], O_RDONLY);
	if (file < 0)
		exit(98);

	rd = read(file, str, 2);
	if (rd < 0)
		exit(98);

	if (str[1] != 'E')
		exit(98);

	close(file);

	return (0);
}
