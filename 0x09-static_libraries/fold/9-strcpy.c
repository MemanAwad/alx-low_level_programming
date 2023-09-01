#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcpy - will copy string to another
 * @dest: pointer to be copied to
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
