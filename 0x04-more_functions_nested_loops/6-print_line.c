#include <stdio.h>
#include "main.h"
/**
 * print_line - this function will print a line
 * @n: the number of dashes
 * Return: void
 *
 */
void print_line(int n)
{
	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
