#include <stdio.h>
#include "main.h"
/**
 * print_numbers - this function will print numbers from 0 to 9
 * Return: void
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
