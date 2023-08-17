#include <stdio.h>
#include "main.h"
/**
 * print_triangle - this function will print a triangle
 * @size: the number used to print triangle
 * Return: void
 *
 */
void print_triangle(int size)
{
	if (size == 0 || size < 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;
			int k;

			for (j = i + 1 ; j < size; j++)
			{
				putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
