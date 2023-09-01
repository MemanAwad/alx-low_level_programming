#include <stdio.h>
#include <string.h>
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
		char *str;
		int c;

		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			for (c = 0; c < (int)(strlen(str)); c++)
			{
				if (str[c] < 48 || str[c] > 57)
				{
					printf("Error\n");
					return (0);
				}
			}
			sum += atoi(str);
		}
		printf("%d\n", sum);
	}

	return (0);
}
