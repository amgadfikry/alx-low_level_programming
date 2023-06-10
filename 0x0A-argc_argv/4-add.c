#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main function add two argv
 * @argc: count args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, x, num = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num += atoi(argv[i]);
	}
	printf("%d\n", num);

	return (0);
}
