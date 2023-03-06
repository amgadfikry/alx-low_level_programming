#include "main.h"
/**
 * _strspn - get length of prefix
 * @s: input string
 * @accept: input
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int con;
	char *start = accept;

	while (*s)
	{
		con = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				i++;
				con = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (con == 0)
			break;
	}

	return (i);
}
