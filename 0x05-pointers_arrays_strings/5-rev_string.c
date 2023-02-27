#include "main.h"
/**
 * rev_string - reverse string
 * @s: input string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int num = 0;
	int x = 0 ;
	char c;

	while (s[i] != '\0')
	{
		num++;
		i++;
	};

	for (j = num - 1; j >= 0; j--)
	{
		c = s[x];
		s[x++] = s[num];
		s[num] = c;
	}
}
