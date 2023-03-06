#include "main.h"
/**
 * _strspn - get length of prefix
 * @s: input string
 * @accept: input 
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int x = 0, y = 0;
	int con = 0;

	while (accept[x])
	{
		y = 0;
		con = 0;
		while (s[y] != ' ')
		{
			if (accept[0] == s[y])
				con = 1;
			if (accept[x] == s[y])
				i++;
			y++;
		}
		if (con == 0)
			return (i);
		x++;
	}

	return (i);
}
