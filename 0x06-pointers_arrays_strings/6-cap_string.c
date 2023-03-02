#include "main.h"
/**
 * cap_string - capitalize string
 * @s: input string
 * Return: capitalize
 */
char *cap_string(char *s)
{
	int i = 0, x;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', ')', '(', '{', '}'};

	while (s[i] != '\0')
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
