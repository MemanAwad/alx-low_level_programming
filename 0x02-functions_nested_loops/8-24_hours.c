#include <stdio.h>
#include "main.h"
/**
 * jack_bauer -print minuetes of the day
 * Return: integar value
 */

void jack_bauer(void)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%d", i);
		int j;

		for(j = 0; j < 4; j++)
		{
			printf("%d", j);
			putchar(':');
			int k;

			for (k = 0; k < 6; k++)
			{
				printf("%d", k);
				int m;

				for (m =0; m < 10; m++)
				{
					printf("%d\n", m);
				}
			}
		}
	}
}
