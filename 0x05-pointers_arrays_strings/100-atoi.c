#include "main.h"
/**
 * _atoi - function that return length of string
 * @s: input string
 * Return: length or 0
 */
int _atoi(char *s)
{
	int i = 0;
	int num = 0;

	while (s[i] != '\0')
	{
		num++;
		i++;
	}

	return (i);
}
