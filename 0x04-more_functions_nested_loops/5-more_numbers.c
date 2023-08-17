#include <stdio.h>
#include "main.h"
/**
 * more_numbers - this function will print numbers from 0 to 14 ten times
 * Return: void
 *
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			putchar(i + '0');
		}
		putchar('\n');
	}
	putchar('\n');
}
