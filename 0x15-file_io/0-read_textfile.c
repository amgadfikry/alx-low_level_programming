#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/uio.h>
/**
 * read_textfile - function reads text file and print
 * it to out put POSIX
 * @filename: file name input
 * @letters: test input
 * Return: number of letters print or reads
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, len, res;
	char *str;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		free(str);
		return (0);
	}
	len = read(file, str, letters);
	if (len < 0)
	{
		free(str);
		return (0);
	}
	res = write(STDOUT_FILENO, str, letters);
	if (res < 0)
	{
		free(str);
		return (0);
	}
	free(str);
	close(file);

	return ((ssize_t)len);
}
