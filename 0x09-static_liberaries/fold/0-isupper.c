#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - this function will check the case of a letter
 * @c: it is the character
 * Return: 0 or 1
 *
 */
int _isupper(int c)
{
	int var;

	if (isupper(c) != 0)
	{
		var = 1;
	}
	else
	{
		var = 0;
	}
	return (var);
}
