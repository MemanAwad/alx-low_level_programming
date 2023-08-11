#include <stdio.h>

/**
 * main - this function will print the numbers from 0-9
 * Return: this function will return 0 to end the program
 */
	int main(void)
	{
		int x;
		int y;
		int count;

		for (x = 48; x < 58; x++)
		{
			for (y = x + 1 ; y < 58; y++)
			{
				putchar(x);
				putchar(y);
				count++;
				if (count < 45)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		putchar('\n');
		return (0);
	}
