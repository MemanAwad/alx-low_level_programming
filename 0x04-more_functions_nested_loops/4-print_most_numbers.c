#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - this function will print numbers from 0 to 9 exept 2&4
 * Return: void
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}
