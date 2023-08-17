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
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < n; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
