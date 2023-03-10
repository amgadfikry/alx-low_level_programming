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
	int x;
	int num1, num2;
	char i, y;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	i = argv[1];
	y = argv[2];
	for (x = 0; x != '\0'; x++)
		num1 = num1 * 10 + (i[x] - 48);
	for (x = 0; x != '\0'; x++)
		num2 = num2 * 10 + (y[x] - 48);
	printf("%d\n", num1 * num2);

	return (0);
}
