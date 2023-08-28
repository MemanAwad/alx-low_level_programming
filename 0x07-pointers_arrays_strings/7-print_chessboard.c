#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - will print chess board
 * @a: the array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < (int)(sizeof(*a) / sizeof(*a[0])); i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
