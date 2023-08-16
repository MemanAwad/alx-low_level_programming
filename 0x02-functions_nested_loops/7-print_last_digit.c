#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - return the last digit of input number
 * @digit: it is the input to give its absoulute value
 * Return: integar value
 */

int print_last_digit(int digit)
{
	int var;

	var = abs(digit%10);
	putchar(var + '0');
	return (var);
}
