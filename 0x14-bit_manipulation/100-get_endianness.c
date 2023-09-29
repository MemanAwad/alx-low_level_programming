#include "main.h"
/**
 * get_endianness - this function check the endiannes
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *indian = (char *) &x;

	return ((int)*indian);
}
