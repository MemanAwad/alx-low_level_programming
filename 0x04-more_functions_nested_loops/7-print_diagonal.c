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
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j <= i; j++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
