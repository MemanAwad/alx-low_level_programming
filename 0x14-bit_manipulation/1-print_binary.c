#include "main.h"

/**
 * rec - convert integer to binary then print it
 * @n: integer value
 * Return: void
 */
void rec(unsigned long int n)
{
	int num = n;
	char c;

	if (num == 0)
		return;
	c = (num & 1) + '0';
	num >>= 1;
	rec(num);
	_putchar(c);
}

/**
 * print_binary - this function convert integer to binary and print it
 * @n: the integer number
 * Return: void
 */

void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		rec(n);
	}

}
