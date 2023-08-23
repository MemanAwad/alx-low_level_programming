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
 * _strncpy - This function will copy the string
 * @dest : the copied string
 * @src : the string will be copied
 * @n : number of character to be copied
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lensrc = len(src);
	int i;

	if (n = 0)
	{
		i = 0;
		dest[i] ='\0';
	}
	else if (n > lensrc || src[n] == '\n')
	{
		for (i = 0; i <  lensrc; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
	}
	else
	{
		int i;

		for (i = 0; i <  n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
