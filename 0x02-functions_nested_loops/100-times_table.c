#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_table - return the last digit of input number
 * Return: void
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;
			int var;

			for (j = 0; j <= n; j++)
			{
				if (i == 0)
				{
					if (j == 0)
					{
						printf("%d", i);
					}
					else
					{
						printf(",  %d", i);
					}
				}
				else if (j == 0)
				{
					printf("%d", j);
				}
				else
				{
					var = i * j;
					if (var < 10)
					{
						printf(",  %d", var);
					}
					else
					{
						printf(", %d", var);
					}
				}
			}
			printf("\n");
		}
	}
}
