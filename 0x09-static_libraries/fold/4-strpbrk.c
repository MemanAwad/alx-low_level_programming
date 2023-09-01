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

	while (*s != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == *s)
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (NULL);
}
