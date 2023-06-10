#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function print count of argv
 * @argc: count args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
