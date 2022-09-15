#include "main.h"

/**
 *
 * main - write a function that checks for uppercase character
 * _isupper - checks if uppercase
 * @c: character to return
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
