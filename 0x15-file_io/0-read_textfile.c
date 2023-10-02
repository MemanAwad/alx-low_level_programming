#include "main.h"

/**
 * read_textfile - function to read a text file and prints it to the stdout
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: number of byte to be printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t des;
	char buff[letters];

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, letters);
	if (fd < 0)
		return (0);
	des = read(fd, buff, letters);
	if (des < 0)
		return (0);
	write(1, buff, des);
	return (des);
}
