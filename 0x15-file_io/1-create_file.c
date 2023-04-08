#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * get_len - get length of string
 * @s: string
 * Return: length
 */
int get_len(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
/**
 * create_file - function create file with content
 * @filename: input of file
 * @text_content: text which be in file
 * Return: 1 or 0
 */
int create_file(const char *filename, char *text_content)
{
	int file, wbytes;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_RDWR | O_TRUNC);
	if (file < 0)
		return (-1);
	if (text_content == NULL)
	{
		return (1);
	}
	wbytes = write(file, text_content, get_len(text_content));
	if (wbytes < 0)
		return (-1);

	return (1);
}
