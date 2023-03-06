#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate substring
 * @haystack: input string
 * @needle: input string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int go = 0;
	char *c = needle;

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			while (*needle)
			{
				if (*haystack == *needle)
					go = 1;
				else
				{
					go = 0;
					break;
				}
				needle++;
			}
		}
		haystack++;
		needle = c;
		if (go == 1)
			return (haystack);
	}

	return (NULL);
}
