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
	int i, x = 0, amount, result = 0;
	int cen[5] = {25, 10, 5, 2, 1};
	
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 1)
	{
		printf("0\n");
		return (0);
	}
	amount = atoi(argv[1]);
	while (x < 5)
	{
		if (amount % cen[x] == 0)
		{
			result++;
			amount -= cen[x];
		}
		else
			i++;
		if (amount == 0)
			break;
	}
	printf("%d\n", result);

	return (0);
}
