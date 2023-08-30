#include "main.h"

/**
 * _puts_recursion - it will print a string
 * @s: the string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	char *str = s;

	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*str);
	str++;
	_puts_recursion(str);
}
