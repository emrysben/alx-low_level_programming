#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first integer to swap
 * @b: second integer to swap
 *
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
