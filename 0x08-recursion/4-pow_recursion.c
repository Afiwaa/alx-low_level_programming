#include "main.h"

/**
 * _pow_recursion - returns value of x raise to y
 * @x: number
 * @y: power
 * Return: value
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		power = (x * _pow_recursion(x, y - 1));
	}
	return (power);
}
