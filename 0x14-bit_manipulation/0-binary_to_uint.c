#include "main.h"

/**
 * binary_to_unit - this function convert binary number to unsigned int
 * @b: the binary number
 * Return: converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;
	unsigned int unit = 1;
	unsigned int len = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			result += unit;
		}
		unit = unit*2;
	}
	return (result);
}
