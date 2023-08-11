#include <stdio.h>

/**
 * main - this function will print the number from 0 to 9
 * Return: this function will return 0 to end the program
 */
	int main(void)
	{
		char ch = 'z';

		while (ch >= 'a')
		{
			putchar(ch);
			ch--;
		}
		printf("\n");
		return (0);
	}
