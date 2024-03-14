#include "search_algos.h"
/**
 * binary_search - function that implement the binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 * Return: index of the value of -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, high, low;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	high = size - 1;
	low = 0;

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
