#include "main.h"
/**
 * len - will return the length of a string
 * @c: the string
 * Return: integer value off the length
 */
int len(char *c)
{
	int len = 0;

	while (c[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * _strcat - This function will concatinate two strings
 * @dest : the string will be concatinate with
 * @src : the string will be concatenated
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = len(src);
	int len2 = len(dest);

	for (i = 0; i <= len1; i++)
	{
		dest[len2 + i] = src[i];
	}
	return (dest);
}
