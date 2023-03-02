#include "main.h"
/**
 * cap_string - capitalize string
 * @s: input string
 * Return: capitalize
 */
char *cap_string(char *s)
{
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', ')', '(', '{', '}'};
	int i = 0;

	while (s[i] != '\n')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		for (i = 0; i < 13; i++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z') && s[i -1] == sep[i])
				s[i] -= 32;
		}
		i++;
	}

	return (s);
}
