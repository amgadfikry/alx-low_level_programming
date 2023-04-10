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
	if (ac != 2)
	{
		perror("args:");
		exit(98);
	}

	return (0);
}
