#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the file
 * @argc: file name
 * @argv: program argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		int mul = 0;
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		mul = num1 * num2;
		printf("%d\n", mul);
	}

	return (0);
}
