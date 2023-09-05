#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * free_grid - free allocated memory of array
 * @grid: the array
 * @height: the height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
