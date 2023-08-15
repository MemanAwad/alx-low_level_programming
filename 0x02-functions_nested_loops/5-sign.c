#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * prin_sign - this function will check if the input is positive or negative or 0
 * @c: it is the input to check
 * Return: 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		var = 1;
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
	
}
