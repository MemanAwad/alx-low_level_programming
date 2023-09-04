#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of char
 * @size: size of the array
 * @c: initailization value of the array
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
