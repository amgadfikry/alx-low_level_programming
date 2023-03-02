#include "main.h"
/**
 * cap_string - capitalize string
 * @s: input string
 * Return: capitalize
 */
char *cap_string(char *s)
{
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', ')', '(', '{', '}'};
	int i = 0, x;

	while (s[i] != '\n')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		for (x = 0; x < 13; x++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z') && s[i -1] == sep[x])
				s[i] -= 32;
		}
		i++;
	}

	return (s);
}
