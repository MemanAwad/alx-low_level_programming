#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - this function will print a diagonal
 * @n: the number used to print diagonal
 * Return: void
 *
 */
void print_diagonal(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
