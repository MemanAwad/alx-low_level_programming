#include <stdio.h>
/**
 * fizzbuzz - this function will multiply 2 digit and return the result
 * Return: void
 *
 */
void fizzbuzz (void);

int main(void)
{
	fizzbuzz();
	printf("\n");
	return (0);
}
void fizzbuzz(void)
{
	char f[5] = "Fizz";
	char b[5] = "Buzz";
	char fb[10] = "FizzBuzz";
	int i;
	
	printf("%d", 1);

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" %s", fb);
		}
		else if (i % 3 == 0)
		{
			printf(" %s", f);
		}
		else if (i % 5 == 0)
		{
			printf(" %s", b);
		}
		else
		{
			printf(" %d", i);
		}
	}
}
