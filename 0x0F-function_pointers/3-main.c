#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - run functions to perform mathmatical operation
 * Return: int
 */
int main(void)
{
	char *str;
	int (*ptr_get_op_func(char *s))(int, int);

	scanf("%s", &str);

	if (strlen(str) > 3)
	{
		printf("Error\n");
		exit(98);
	}
	ptr_get_op_func = get_op_func();
	if (ptr_get_op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (0)
	{
		printf("Error\n");
		exit(100);
	}
	return (0);
}
