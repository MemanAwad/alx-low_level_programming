#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - check if the input is positive or negative or 0
 * @n: it is the input to check
 * Return: 0 or 1
 */

int print_sign(int n)
{
	int var;

	if (n > 0)
	{
		var = 1;
		_putchar('+');
		return (var);
	}
	else if (n == 0)
	{
		var = 0;
		_putchar(48);
		return (var);
	}
	else
	{
		var = -1;
		_putchar(45);
		return (var);
	}
}
