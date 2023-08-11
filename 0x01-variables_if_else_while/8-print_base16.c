#include <stdio.h>

/**
 * main - this function will print hex number from 0 to f
 * Return: this function will return 0 to end the program
 */
	int main(void)
	{
		char ch = '0';

		while (ch >= 'a')
		{
			putchar(ch);
			ch--;
		}
		printf("\n");
		return (0);
	}
