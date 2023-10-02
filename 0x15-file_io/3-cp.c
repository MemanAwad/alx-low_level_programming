#include "main.h"
#include <stdio.h>
#define BUFF_SIZE 1024

/**
 * readfrom - function to read from a given file
 * @filefrom: file tp be read from
 * @buffer: the buffer to store the read data
 * @fd: file descripptor
 * Return: number of read byte
 */

static ssize_t readfrom(char *filefrom, char **buffer, int fd)
{
	int readd;

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	if (!(*buffer))
		*buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (!(*buffer))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	readd = read(fd, *buffer, BUFF_SIZE);
	if (readd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	return (readd);
}

/**
 * write_to_file - write the content of the bufer to the file
 * @file_to: the file to write to
 * @fd: file descriptor
 * @buffer: the content to be written
 * @len: lenght of byte to be written
 * Return: void
 */

static void write_to_file(char *file_to, int fd, char *buffer, int len)
{
	if (fd < 0 || !buffer)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (write(fd, buffer, len) < 0)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

}

/**
 * main - copy the content of one file to another
 * @ac: number of argument
 * @av: array of argument
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int fd1, fd2, cl, cl2;
	char *src, *dest;
	char *buffer;
	int re = 1;

	buffer = NULL;
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = av[1];
	dest = av[2];
	fd1 = open(src, O_RDONLY);
	fd2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (re > 0)
	{
		re = readfrom(src, &buffer, fd1);
		if (!re)
			break;
		write_to_file(dest, fd2, buffer, re);
	}
	free(buffer);
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
