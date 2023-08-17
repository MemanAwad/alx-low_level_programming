#include <stdio.h>
#include "main.h"
/**
 * print_square - this function will print a square
 * @size: the number used to print square
 * Return: void
 *
 */
void print_square(int size)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
