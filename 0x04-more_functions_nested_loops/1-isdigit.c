#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - this function will check if the input is a digit
 * @c: the input to check
 * Return: 0 or 1
 *
 */
int _isdigit(int c)
{
	int var;

	if (isdigit(c) != 0)
	{
		var = 1;
	}
	else
	{
		var = 0;
	}
	return (var);
}
