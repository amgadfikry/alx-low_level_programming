#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry function
 * @argc: number of args
 * @argv: array of args
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
	int (*func_p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	&& atoi(argv[3]) == 0)
	{
		printf("Error");
		exit(100);
	}

	func_p = get_op_func(argv[2]);

	if (func_p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func_p(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
