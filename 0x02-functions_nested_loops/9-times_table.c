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

	for (i = 0; i < 10; i++)
	{
		int j;
		int var;

		for (j = 0; j < 10; j++)
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
