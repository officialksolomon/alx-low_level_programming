#include "main.h"

/**
 * factorial - function to calculate the factorial n
 * (a given number).
 * @n: integer parameter (n).
 * Return: ....
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
