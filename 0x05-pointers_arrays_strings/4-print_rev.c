#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: character to get string
 */
void print_rev(char *s)
{
	int length;
	int last;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	last = length - 1;
	for (; last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
