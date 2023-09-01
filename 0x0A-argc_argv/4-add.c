#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - print the name of the file
 * @argc: file name
 * @argv: program argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int sum = 0;
		int i;

		for (i = 1; i < argc; i++)
		{
			int type = atoi(argv[i]);

			if (type == 0)
			{
				printf("Error\n");
				return (0);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
