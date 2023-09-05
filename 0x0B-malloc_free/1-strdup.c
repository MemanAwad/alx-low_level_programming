#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate string and return poiter to it
 * @str: the string to be dublicated
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *s;
	int i, len;

	len = strlen(str);
	if (*str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * len);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
