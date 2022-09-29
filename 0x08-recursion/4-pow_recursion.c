#include "main.h"

/**
 * _pow_recursion - rturns the value rasied to power
 * @x: value to input
 * @y: raised power
 *
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
