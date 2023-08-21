#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - will print n number of an array
 * @a: array to be printed
 * @n: number of element to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		printf("%d", a[0]);
		for (i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
