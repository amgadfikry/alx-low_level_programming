#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * get_len - get length of string
 * @s: string input
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
 * append_text_to_file - function add text at end of file
 * @filename: input file
 * @text_content: text add to file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wbytes;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND);
	if (file < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	wbytes = write(file, text_content, get_len(text_content));
	if (wbytes < 0)
	{
		close(file);
		return (-1);
	}
	close(file);

	return (1);
}
