#include <stdio.h>

/**
 * main - this function will print letter in lower case
 * Return: this function will return 0 to end the program
 */
	int main(void)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			if (ch != 'q' && ch != 'e')
			putchar(ch);
			ch++;
		}
		printf("\n");
		return (0);
	}
