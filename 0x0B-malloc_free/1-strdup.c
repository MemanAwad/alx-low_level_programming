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

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	s = malloc(sizeof(char) * len + 1);
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
