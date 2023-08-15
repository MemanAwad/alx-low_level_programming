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
	int var;

	if (n > 0)
	{
		var = 1;
		putchar(43);
		return var;
	}
	else if (n == 0)
	{
		var = 0;
		putchar(48);
		return var;
	}
	else
	{
		var = -1;
		putchar(45);
		return var;
	}
	
}
