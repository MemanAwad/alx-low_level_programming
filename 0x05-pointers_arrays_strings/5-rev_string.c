#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - will print a stringin reverse
 * @s: string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
