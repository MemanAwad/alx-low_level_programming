#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - this function will check the case of a letter
 * @c: it is the character
 * Return: 0 or 1
 */
int _islower(int c)
{
	int var = c;

	return (islower(var));
}
int _putchar(int k)
{
	 putchar(k);
}
