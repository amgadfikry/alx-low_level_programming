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
	char *c = needle;
	char *p = haystack;

	while (*haystack)
	{
		needle = c;
		p = haystack;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = p + 1;
	}

	return (NULL);
}
