#include "main.h"
/**
 * _strncpy - This function will copy the string
 * @dest : the copied string
 * @src : the string will be copied
 * @n : number of character to be copied
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{

		int i = 0;

		while (i < n && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}
