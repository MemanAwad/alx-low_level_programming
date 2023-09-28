#include "main.h"

/**
 * flipp - function return the number of integer to be flipped
 * @n: the number
 * Return: total number to be flipped
 */

unsigned int flipp(unsigned int n)
{
	int flip = 0;

	while (n > 0)
	{
		flip++;
		n &= (n - 1);
	}
	return (flip);
}
/**
 * flip_bits - function set the bit value at a given index to 0
 * @n: the integer number
 * @m: the desired number
 * Return: 1 if success -1 if fail
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (flipp(n ^ m));
}
