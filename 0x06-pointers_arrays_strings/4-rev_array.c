#include "main.h"
/**
 * reverse_array - will reverse an array
 * @a : the pointer to the array
 * @n : number of element to be reversd
 * Return: integer value
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
