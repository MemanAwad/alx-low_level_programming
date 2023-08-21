#include <stdio.h>
#include "main.h"
/**
 * _strlen - will return the length of the string
 * @s : the string
 * Return: ineger value
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
