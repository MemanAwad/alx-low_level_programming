#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_table - return the last digit of input number
 * Return: void
 */

void times_table(void)
{
	int i;
	int zero =0;

	for (i = 0; i < 10; i++)
	{
		int j;

		_putchar(0 + '0');
		for (j = 0; j < 10; j++)
		{
			if (i == 0)
			{
				_putchar(0 + '0');
				_putchar(' ');
			}
			else
			{
				_putchar(i + 1 +'0' );
				_putchar(' ');
			}
		}
	}
}
