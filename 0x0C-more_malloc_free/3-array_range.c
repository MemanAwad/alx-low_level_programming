#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array of integers
 * @min: minumum value
 * @max: maximum value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int  *ptr;
	int i, j = 0;
	int count;

	if (min > max)
	{
		return (NULL);
	}
	count = (max - min) + 1;
	ptr = malloc(count * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i <= max; i++)
		{
			ptr[j] = min;
			j++;
			min++;
		}
		return (ptr);
	}
}
