#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts - will print a string follow by new line
 * @str: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = (strlen(s)-1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	/*while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');*/
}
