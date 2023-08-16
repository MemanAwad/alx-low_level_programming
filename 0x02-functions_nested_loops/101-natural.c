#include <stdio.h>
#include "main.h"
/**
 * main - this function will call print_natural function
 * Return: always zero
 */
void print_natural(void);
int main(void)
{
	print_natural();
	return (0);
}
/**
 * print_natural - it will print multiplies of 3 and 5 under 1024
 * Return: void
 */
void print_natural(void)
{
	int num = 1024;
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
