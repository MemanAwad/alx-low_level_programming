#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - returns string from matched char
 * @s: the string
 * @accept: string to match
 * Return: integer value
 */

char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s != '\0')
	{
		int j = 0;

		while (accept[j] != *s && accept[j] != '\0')
		{
			j++;
		}
		if (accept[j] == *s)
		{
			n = 1;
			break;
		}
		s++;
	}
	if (n > 0)
	{
		return (NULL);
	}
	else
	{
		return (s);
	}
}