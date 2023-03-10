#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: count args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (*argv)
	{
		printf("%s\n", argv);
		argv++;
	}

	return (0);
}
