#include "main.h"
/**
 * cap_string - capitalize string
 * @s: input string
 * Return: capitalize
 */
char *cap_string(char *s)
{
	int i = 0, x;

	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && s[i -1] == ' ' || '\t' || '\n' || ',' || ';' || '!' || '?' || '"' || ')' || '(' || '{' || '}')
			s[i] -= 32;
		i++;
	}

	return (s);
}
