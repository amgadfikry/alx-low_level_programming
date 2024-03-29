#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * number_words - get number of words in the string
 * @str: input string
 * Return: number of words
 */
int number_words(char *str)
{
	int size = 0;

	while (*str)
	{
		if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
			size++;
		str++;
	}
	return (size);
}
/**
 * copy_string - copy content from string to array
 * @str: string input
 * @arr: pointer to array
 * Return: pointer to array
 */
char **copy_string(char *str, char **arr)
{
	int y = 0, x = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			arr[y][x] = *str;
			x++;
		}
		if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
		{
			arr[y][x] = '\0';
			y++;
			x = 0;
		}
		str++;
	}
	arr[y] = NULL;

	return (arr);
}
/**
 * strtow - split strings into words
 * @str: input string
 * Return: pointer to array
 */
char **strtow(char *str)
{
	char **arr, *s = str, **result;
	int size, word = 0, count = 0, y = 0;

	if (str == NULL || !*str)
		return (NULL);

	size = number_words(str);
	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (size + 1));
	if (arr == NULL)
		return (NULL);

	while (*str)
	{
		if (*str != ' ')
		{
			word = 1;
			count++;
		}
		if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
			word = 0;
		if (word == 0 && count > 0)
		{
			arr[y] = malloc(sizeof(char) * (count + 1));
			if (arr[y] == NULL)
				return (NULL);
			count = 0;
			y++;
		}
		str++;
	}
	str = s;

	result = copy_string(str, arr);

	return (result);
}
