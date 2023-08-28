#include "main.h"
/**
 * _strchr - return pointer to the first occurence of the char
 * @s: the string
 * @c: the charachter
 * Return: pointer to the first occerunce
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char **p;

	while (s[i] != c)
	{
		x = i;
		i++;
	}
	p = *(s + i);
	return (*p);
}
