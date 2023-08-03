#include "main.h"

/**
 * _pow_recursion - calculates power of a number using
 * recursion>.
 * @x: integer parameter (x).
 * @y: integer paramter (y)
 * Return: int
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
