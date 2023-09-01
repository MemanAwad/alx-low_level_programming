#include <stdio.h>

/**
 * main - print the name of the file
 * @argc: file name
 * @argv: program argument
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
