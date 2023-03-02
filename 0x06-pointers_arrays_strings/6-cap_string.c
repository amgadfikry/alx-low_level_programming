#include "main.h"
/**
 * cap_string - capitalize string
 * @s: input string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;
	int x;
	char sep[13];

	sep[0] = ' ';
	sep[1] = '\n';
	sep[2] = '\t';
	sep[3] = ',';
	sep[4] = ';';
	sep[5] = '.';
	sep[6] = '!';
	sep[7] = '?';
	sep[8] = '"';
	sep[9] = '(';
	sep[10] = ')';
	sep[11] = '{';
	sep[12] = '}';
	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		for (x = 0; x < 13; x++)
		{
			if (sep[x] == s[i - 1] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
		}
		i++;
	}

	return (s);
}
