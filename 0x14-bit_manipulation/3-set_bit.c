#include "main.h"

/**
 * set_bit - function set the bit value at a given index to 1
 * @n: the integer number
 * @index: the index
 * Return: 1 if success -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int status;
	unsigned int result = *n;

	if (index > 31)
		return (-1);
	status = 1 << index;
	*n = (result & ~status) | (1 << index);
	return (1);
}
