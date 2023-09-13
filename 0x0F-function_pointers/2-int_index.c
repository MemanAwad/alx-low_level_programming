#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - will return first matched index
 * @array: the array
 * @size: the size of the array
 * @cmp: pointer to function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int element;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			element = cmp(array[i]);
			if (element > 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
