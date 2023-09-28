#include "main.h"

/**
 * clear_bit - function set the bit value at a given index to 0
 * @n: the integer number
 * @index: the index
 * Return: 1 if success -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int status;
	unsigned int result = *n;

	status = 1 << index;
	*n = (result & ~status) | (0 << index);
	return (1);
}
