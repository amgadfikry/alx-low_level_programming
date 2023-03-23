#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry function
 * @argc: arg number
 * @argv: array of args
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
