#include "main.h"
/**
 * sqroot - it will return the factorial of the number
 * @n: the number
 * @temp: used to calculate
 * Return: int number
 */
int sqroot(int number, float n, float temp)
{
	if (n == temp)
	{
		return (n);
	}
	else
	{
		temp = n;
		n = ((number / temp) + temp) / 2;
		return (sqroot(number, n, temp));
	}
}
/**
 * is_prime - will check if the number is prime
 * @num: the numberto check
 * @num2: help to calculate
 * Return: 0 or 1
 */
int is_prime(int num, int num2)
{

	if (num2 == 1 || num == 2)
	{
		return (1);
	}
	if (num % num2 == 0 || num == 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(num, num2 - 1));
	}
}
/**
 * _sqrt_recursion - will return the square root of the number
 * @n: the number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		int num1 = is_prime(n, n - 1);

		if (num1 == 1)
		{
			return (-1);
		}
		else
		{
			float num = (float)(n / 2);
			float temp = 0;
			int number = n;

			return (sqroot(number, num, temp));
		}
	}
}
