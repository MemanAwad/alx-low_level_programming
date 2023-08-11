#include <stdio.h>

/**
 * main - this function will print the numbers from 0-9
 * Return: this function will return 0 to end the program
 */
	int main(void)
	{
		int num = 0;

		while (num < 10)
		{
			putchar(num%10 + '0');
			num++;
		}
		printf("\n");
		return (0);
	}
