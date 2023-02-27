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
	char str[int num];

	while (s[i] != '\0')
	{
		num++;
		i++;
	};
	for (j = 0; j > num; j++)
	{
		str[j] = s[j];
	};
	for (j = num - 1; j >= 0; j--)
	{
		s[x] = str[j];
		x++;
	}
}
