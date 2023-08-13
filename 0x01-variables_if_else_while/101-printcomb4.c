#include <stdio.h>

	int main (void)
	{
		int i;
		int x;
		int y;
		int count = 0;

		for (i = 48; i < 58; i++)
		{
			for (x = i + 1; x < 58; x++)
			{
				for (y = x + 1; y < 58; y++)
				{
					putchar(i);
					putchar(x);
					putchar(y);
					count++;
				
					if (count < 120)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
		putchar('\n');
		return(0);
	}
