#include <stdio.h>

/**
 * main - this function will print the numbers from 0-9
 * Return: this function will return 0 to end the program
 */
	int main(void)
	{
		int x;
		int y;

		for (x = 48; x < 58; x++)
		{
			for (y = x + 1 ; y < 58; y++)
			{
					putchar(x);
					putchar(y);

				if (x < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		putchar('\n');
		return (0);
	}