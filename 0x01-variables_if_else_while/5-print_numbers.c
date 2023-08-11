#include <stdio.h>

/**
 * main - this function will print the number from 0 to 9
 * Return: this function will return 0 to end the program
 */
	int main(void)
	{
		int num = 0;

		while (num < 10)
		{
			printf("%d", num);
			num++;
		}
		printf("\n");
		return (0);
	}
