#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>
/**
 * file_len - get file content len
 * @file_name: file name
 * Return: length
 */
int file_len(char *file_name)
{
	struct stat len;

	stat(file_name, &len);

	return (len.st_size);
}
/**
 * file_read - read file and get string
 * @file: file name disctiptor
 * @len: length of file
 * Return: copy of content
 */
char *file_read(int file, int len)
{
	char *str;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	read(file, str, len);

	return (str);
}
/**
 * main - function copy file contents to another
 * @ac: args numbers
 * @av: args
 * Return: 0 or exit
 */
int main(int ac, char **av)
{
	int file_from, file_to, wr, len, close_file;
	char *str;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	len = file_len(av[1]);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	str = file_read(file_from, len);

	file_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	wr = write(file_to, str, len);
	if (wr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	close_file = close(file_from);
	if (close_file < 0)
	{
		dprintf(STDERR_FILENO, " Can't close fd FD_VALUE %d\n", file_from);
		exit(100);
	}
	close_file = close(file_to);
	if (close_file < 0)
	{
		dprintf(STDERR_FILENO, " Can't close fd FD_VALUE %d\n", file_to);
		exit(100);
	}

	return (0);
}
