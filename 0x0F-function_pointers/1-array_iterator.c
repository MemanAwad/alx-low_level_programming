#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - will iterate through array and call function
 * @array: the array
 * @size: the size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*ptr)(int) = action;
	size_t i;

	for (i = 0; i < size; i++)
	{
		(ptr)(array[i]);
	}
}
