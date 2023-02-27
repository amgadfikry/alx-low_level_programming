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
	int j;
	int x = 0;
	char str[];

	while (s[i] != '\0')
	{
		str[i] = s[i];
		num++;
		i++;
	};
	for (j = num - 1; j >= 0; j--)
	{
		s[x] = str[j];
		x++;
	}
}
