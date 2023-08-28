#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - returns number of bytr matched
 * @s: the string
 * @accept: string to match
 * Return: integer value
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int count = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		int j = 0;

		while (s[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}
