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

	for (i = 0; i < len / 2; i = i + 1)
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
