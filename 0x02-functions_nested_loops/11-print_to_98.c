#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print numbers until 98
 * @n : staring point
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else 
	{
		int i;
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
		}
	}
}
