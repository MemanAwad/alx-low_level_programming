#include "main.h"
/**
 * is_prime - will check if the number is prime
 * @n: the number
 * Return: 0 or 1
 */
int i = n/2;

int is_prime_number(int n)
{

	if (i == 1)
	{
		return (1);
	}

	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		i--;
		is_prime(n);
	}
}
