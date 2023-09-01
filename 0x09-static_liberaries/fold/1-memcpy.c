#include "main.h"
/**
 * _memcpy - copy n byte from src to dest
 * @dest: destenation string
 * @src: source string
 * @n: number of bytes to be copyed
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
