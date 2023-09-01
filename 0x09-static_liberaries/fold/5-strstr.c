#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - find the first occurance of substring
 * @haystack: the string
 * @needle: string to match
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	char *s1;
	char *s2;

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			s1 = haystack;
			s2 = needle;

			while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
			{
				return (haystack);
			}
		}
	}
	return (NULL);
}
