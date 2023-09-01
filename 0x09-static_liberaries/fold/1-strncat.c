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
 * _strncat - This function will concatinate n charachter to string
 * @dest : the string will be concatinite with
 * @src : the string will be concatenated
 * @n : number of character to be concatenated
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int lensrc = len(src);

	if (n > lensrc)
	{
		int i;
		int len1 = len(dest);

		for (i = 0; i <  lensrc; i++)
		{
			dest[len1 + i] = src[i];
		}
	}
	else
	{
		int i;
		int len1 = len(dest);

		for (i = 0; i <  n; i++)
		{
			dest[len1 + i] = src[i];
		}
	}
	return (dest);
}
