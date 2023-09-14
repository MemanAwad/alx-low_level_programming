#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - run functions to perform mathmatical operation
 * @argc: number of argument
 * @argv: array of argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;
	char *oper;
	int (*ptr)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	oper = argv[2];
	num2 = atoi(argv[3]);

	ptr = get_op_func(oper);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (oper[0] == '/' || oper[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
