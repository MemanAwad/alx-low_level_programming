#include "main.h"
/**
 * _pow_recursion - it will return value of x raiesed by y
 * @x: the number
 * @y: the power value
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
