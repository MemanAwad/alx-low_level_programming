#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - will print the sum of the diaginal
 * @a: the array
 * @size: the diagonal
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		sum = sum + a[i];
	}
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		sum2 = sum2 + a[j];
	}
	printf("%d, %d\n", sum, sum2);
}
