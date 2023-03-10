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
	int x, int y;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	x = argv[1];
	y = argv[2];
	printf("%d\n", x * y);

	return (0);
}
