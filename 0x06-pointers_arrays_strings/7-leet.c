#include "main.h"
/**
 * leet - encode string
 * @s: input string
 * Return: encoding string
 */
char *leet(char *s)
{
	int i = 0;
	char let[10];
	int num[5];
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
	num[0] = 4;
	num[1] = 3;
	num[2] = 0;
	num[3] = 7;
	num[4] = 1;
	while (s[i] != '\0')
	{
		for (x = 0; x < 10; x++)
		{
			if (s[i] == let[x])
				s[i] = num[x / 2];
		}
		i++;
	}

	return (s);
}
