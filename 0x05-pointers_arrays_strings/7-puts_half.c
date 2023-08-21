#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - will print half of a string
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
