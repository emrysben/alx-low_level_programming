#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: int to be used for the arguments of the function
 *
 * Return: 1 and print + if n is greater than zero
 * or 0 and print 0 if n is zero
 * or -1 and print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)

	{
	_putchar('+');
	return ('1');
	}

	if (n == 0)

	{
	_putchar('0');
	return (0);
	}

	if (n < 0)

	{
	_putchar('-');
	}
	return (-1);
}
