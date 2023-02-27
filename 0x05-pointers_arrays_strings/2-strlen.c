#include "main.h"
/**
 * _strlen - return length of string
 * @s: input char
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;
	int num = 0;

	while (s[i] != '\0')
	{
		num++;
		i++;
	}

	return (num);
}
