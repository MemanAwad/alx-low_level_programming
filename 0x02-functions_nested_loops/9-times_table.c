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
				if (j == 9)
				{
					printf("%d", i);
				}
				else
				{
					printf("%d,  ", i);
				}
			}
			else
			{
				var = i * j;
				if (var < 10)
				{
					if (j == 9)
					{
						printf("%d", var );
					}
					else
					{
						printf("%d,  ", var );
					}
				}
				else
				{
					if (j == 9)
					{
						printf("%d", var );
					}
					else
					{
						printf("%d, ", var );
					}				
				}
			}
		}
		if (i == 9)
			break;
		printf("\n");
	}
}
