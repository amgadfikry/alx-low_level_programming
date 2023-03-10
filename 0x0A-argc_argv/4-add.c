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
	int i;
	int num = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && argv[i] == "0")
		{
			printf("Error\n");
			return (1);
		}
		num += atoi(argv[i]);
	}
	printf("%d\n", num);

	return (0);
}
