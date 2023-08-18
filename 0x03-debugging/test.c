#include "stdio.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
int largest_number(int a, int b, int c);
int main(void)
{
	int large;

	large =largest_number(978,1008,3000);
	printf("%d is the largest number\n", large);
	return (0);
}
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c || a == b || a == c)
	{
		largest = a;
	}
	else if (b > a && b > c || b == c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	return (largest);
}
