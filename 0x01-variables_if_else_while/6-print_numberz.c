#include <stdio.h>

/**
 * main - this function will print the numbers from 0-9
 * Return: this function will return 0 to end the program
 */
	int main(void)
	{
		int x;

		for (x = 48; x < 58; x++)
		{
			putchar(x);
		}
		putchar('\n');
		return (0);
	}
