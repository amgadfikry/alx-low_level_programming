#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function print argv
 * @argc: count args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
