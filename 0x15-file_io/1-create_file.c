#include "main.h"
/**
 * _strlen - function count the length of the string
 * @str: the string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int count = 0;
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}
/**
 * create_file - function to create a file with given contents
 * @filename: the name of the file
 * @text_content: null terminated string to be written in the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int len;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	len = _strlen(test_content);
	wr = write(fd, test_content, len);
	if (wr <= 0)
		return (-1);

	close(fd);
	return (1);
}
