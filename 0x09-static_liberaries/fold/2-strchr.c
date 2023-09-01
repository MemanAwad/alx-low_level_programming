#include "main.h"
#include <stdio.h>
/**
 * _strchr - return pointer to the first occurence of the char
 * @s: the string
 * @c: the charachter
 * Return: pointer to the first occerunce
 */

char *_strchr(char *s, char c)
{

	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
