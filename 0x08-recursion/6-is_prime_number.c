#include "main.h"

/**
 * iterate - itrate through the giving number
 * @num: nuber to be iterated
 * @num2: the second number
 * Return: integer
 */
int iterate(int num, int num2)
{
	if (num2 == 1)
	{
		return (1);
	}
	if (num % num2 == 0)
	{
		return (0);
	}
	else
	{
		return (iterate(num, num2 - 1));
	}
}
/**
 * is_prime_number - will check if the number is prime
 * @n: the number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (iterate(n, n - 1));
	}
}
