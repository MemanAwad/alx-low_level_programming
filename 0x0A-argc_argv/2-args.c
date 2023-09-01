#include <stdio.h>

/**
 * main - print the name of the file
 * @argc: file name
 * @argv: program argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
