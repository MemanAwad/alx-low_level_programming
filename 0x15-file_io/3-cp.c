#include "main.h"
#include <stdio.h>
#define BUFF_SIZE 1024
/**
 * main - copy the content of one file to another
 * @ac: number of argument
 * @av: array of argument
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int fd1, fd2, wr, cl, cl2, re;
	char *src, *dest;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = av[1];
	dest = av[2];
	fd1 = open(src, O_RDONLY);
	fd2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (fd2 < 0 || buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		free(buffer);
		exit(98);
	}
	re = read(fd1, buffer, BUFF_SIZE);
	if (re < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		free(buffer);
		exit(98);
	}
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	wr = write(fd2, buffer, re);
	if (wr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	cl = close(fd1);
	cl2 = close(fd2);
	if (cl < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	if (cl2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (0);
}
