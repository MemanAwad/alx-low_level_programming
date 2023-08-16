#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code
 * Return: Always zero
 */
void jack_bauer(void);
int main(void)
{
	jack_bauer();
	putchar('\n');
	return (0);
}

void jack_bauer(void)
{
	int i;
	int count = 0;

	for (i = 0; i < 3; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int k;

			for (k = 0; k < 6; k++)
			{
				int m;

				for (m = 0; m < 10; m++)
				{
					if (count < 1439)
					{
						printf("%d%d:%d%d\n", i, j, k, m);
					}
					else
					{
						printf("%d%d:%d%d", i, j, k, m);
					}
					count++;
				}
			}
			if (i ==2 && j ==3)
			{
				break;
			}
		}
	}
}
