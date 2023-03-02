#include "main.h"
/**
 * cap_string - capitalize string
 * @s: input string
 * Return: capitalize
 */
char *cap_string(char *s)
{
	char sep[12] = {' ','\n',',',';','.','!','?','"',')','(','{','}'};
	char *c = s;
	int i, num = 0;
	char p;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (*s)
	{
		for (i = 0; i < 12; i++)
		{
			if ((*s >= 'a' && *s <= 'z') && p == sep[i])
			{
				*s -= 32;
			}
		}
		p = *s;
		s++;
	}

	return (c);
}
