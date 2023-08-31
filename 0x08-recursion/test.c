#include <stdio.h>

int is_prime_number(int num, int num2)
{

	if (num2 == 1 || num == 2)
	{
		return (1);
	}
	if (num % num2 == 0 || num == 1 )
	{
		return (0);
	}
	else
	{
		return (is_prime_number(num, num2 - 1));
	}
}
int main(void)
{
	int r;

	r = is_prime_number(17, 16);
	printf("%d\n", r);
	return (0);
}
