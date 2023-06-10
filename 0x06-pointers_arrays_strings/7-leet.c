#include "main.h"
/**
 * leet - encode the string
 * @s: input string
 * Return: encoding string
 */
char *leet(char *s)
{
	int i = 0;
	int let[10];
	int num[10];
	int x;

	let[0] = 'a';
	let[1] = 'A';
	let[2] = 'e';
	let[3] = 'E';
	let[4] = 'o';
	let[5] = 'O';
	let[6] = 't';
	let[7] = 'T';
	let[8] = 'l';
	let[9] = 'L';
	num[0] = '4';
	num[1] = '4';
	num[2] = '3';
	num[3] = '3';
	num[4] = '0';
	num[5] = '0';
	num[6] = '7';
	num[7] = '7';
	num[8] = '1';
	num[9] = '1';
	while (s[i] != '\0')
	{
		for (x = 0; x < 10; x++)
		{
			if (s[i] == let[x])
			{
				s[i] = num[x];
				break;
			}
		}
		i++;
	}

	return (s);
}
