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
 * append_text_to_file - function append text to existing file
 * @filename: the name of the file
 * @text_content: null terminated string to be written in the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int len;

	if (!filename)
	{
		return (-1);
	}
	else if (!text_content)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	len = _strlen(text_content);
	wr = write(fd, text_content, len);
	if (wr < 0)
		return (-1);

	close(fd);
	return (1);
}
