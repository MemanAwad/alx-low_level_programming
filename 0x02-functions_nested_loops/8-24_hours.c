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
		int j;

		for (j = 0; j < 4; j++)
		{
			int k;

			for (k = 0; k < 6; k++)
			{
				int m;

				for (m = 0; m < 10; m++)
				{
					printf("%d%d:%d%d", i, j, k, m);
				}
			}
		}
	}
}
