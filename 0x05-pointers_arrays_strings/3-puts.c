#include "main.h"

/**
 * _puts - prints a string tostdout
 *
 * @str: pointer to string
 *
 * REturn: 0
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
