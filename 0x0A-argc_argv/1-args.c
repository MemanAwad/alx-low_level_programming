#include <stdio.h>

/**
 * main - print the name of the file
 * @argc: file name
 * @argv: program argument
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
