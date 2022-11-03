#include "main.h"
/**
 * _pow_recursion - value of x to be raised to y
 * @x: main value
 * @y: power value
 * Return: value calculated to be returned
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
	return (x * _pow_recursion(x, y - 1));
}
