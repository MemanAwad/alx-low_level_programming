#include "main.h"

/**
 * read_textfile - function to read a text file and prints it to the stdout
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: number of byte to be printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	int wr = 0;
	ssize_t des;
	char *buff;

	if (filename == NULL || !letters)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	fd = open(filename, letters);
	if (fd < 0)
	{
		free(buff);
		return (0);
	}
	des = read(fd, buff, letters);
	if (des < 0)
	{
		free(buff);
		return (0);
	}
	wr = write(STDOUT_FILENO, buff, des);
	if (wr <= 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (des);
}
