#include <stdio.h>
#include "main.h"
/**
 * _puts - will print a string follow by new line
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
