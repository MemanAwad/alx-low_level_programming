#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills first n bytes with constant byte b
 * @s: the string
 * @b: this filling byte
 * @n: number of bytes to be filled
 * Return: string s
 */

void _memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
}
/**
 * _calloc - allocate memory for an array using calloc
 * @nmemb: number of element
 * @size: size of byte
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		_memset(ptr, 0, nmemb * size);
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
