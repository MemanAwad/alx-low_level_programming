#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - will print other character in string
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
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
		x = (len / 2) + 1;
	}
	for (i = 0; i < x; i = i + 1)
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
