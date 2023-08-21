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
	int x;
	
	if (len % 2 == 0)
	{
		x = len / 2;
	}
	else
	{
		x = (len / 2 ) - 1;
	}
	for (i = x; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
