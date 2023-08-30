#include <stdio.h>
/**
 * _strlen_recursion - it will return the length of the string
 * @s: the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	char *str = s;

	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(str + 1));
	}
}
