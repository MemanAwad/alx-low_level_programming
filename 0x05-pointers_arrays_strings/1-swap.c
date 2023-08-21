#include <stdio.h>
#include "main.h"
/**
 * swap_int - will swap two integer numbers
 * @a : the first number to be swapped
 * @b : the second number to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
