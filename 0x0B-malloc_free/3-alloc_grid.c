#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid - return a pointer to 2 dimensional array
 * @width: the width
 * @height: the height
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		int j;

		ptr[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
