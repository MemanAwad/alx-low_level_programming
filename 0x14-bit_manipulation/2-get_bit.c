#include "main.h"

/**
 * get_bit - function returns the bit value at a given index
 * @n: the integer number
 * @index: the index
 * Return: void
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int status;
	 if (index > 31)
	 {
	 	return (-1);
	 }
	status = (n >> index) & 1;
	return (status);
}
