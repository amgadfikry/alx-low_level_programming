#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concate all args of the program
 * @ac: length of args
 * @av: array of args
 * Return: concate of args
 */
char *argstostr(int ac, char **av)
{
	int size = 0, i, x, y;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
			size++;
		size++;
	}

	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
		return (NULL);

	y = 0;
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			str[y] = av[i][x];
			y++;
		}
		str[y] = '\n';
		y++;
	}

	return (str);
}
