#include <stdio.h>

/**
 * main - this function will print hex number from 0 to f
 * Return: this function will return 0 to end the program
 */
	int main(void)
	{
		int x;

		for (x = 0; x <= 9; x++)
		{
			putchar(x + '0');
		}

		for (x = 10; x <= 15; x++)
		{
		       putchar(x + 'a' - 10);
		}
		putchar('\n');
		return (0);
	}
