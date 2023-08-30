#include "main.h"

/**
 * _print_rev_recursion - it will print a string int reverse
 * @s: the string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char *str = s;

	if (*str == '\0')
	{
		return;
	}
	_print_rev_recursion(str + 1);
	_putchar(*str);
}
