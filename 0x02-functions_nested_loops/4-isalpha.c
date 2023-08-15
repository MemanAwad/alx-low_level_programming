#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - this function will check if the input is a character
 * @c: it is the input to check
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int var;

	if (isalpha(c) != 0)
	{
		var = 1;
	}
	else
	{
		var = 0;
	}
	return (var);
}
