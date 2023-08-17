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

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
