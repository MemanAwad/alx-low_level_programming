#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - find the first occurance of substring
 * @haystack: the string
 * @needle: string to match
 * Return: string
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j])
			if(j == 7)
			{
				printf("\n");
			}
		}
	}
}
