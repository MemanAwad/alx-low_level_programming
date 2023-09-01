#include "main.h"
/**
 * _memset - fills first n bytes with constant byte b
 * @s: the string
 * @b: this filling byte
 * @n: number of bytes to be filled
 * Return: string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char **p;

	p = &s;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (*p);
}
