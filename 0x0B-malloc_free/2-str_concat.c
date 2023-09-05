#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - will concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, len, len2;

	if (s1 == NULL)
	{
		s = s2;
		return (s);
	}
	if (s2 == NULL)
	{
		s = s1;
		return (s);
	}
	len = strlen(s1);
	len2 = strlen(s2);
	s = malloc(sizeof(char) * len + sizeof(char) * len2 + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s[i + len] = s2[i];
	}
	s[i + len] = '\0';
	return (s);
}
